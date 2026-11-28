#!/usr/bin/env python3
import time
import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer, ActionClient
from rclpy.callback_groups import ReentrantCallbackGroup
from rclpy.executors import MultiThreadedExecutor

from planta_interfaces.msg import SectorInfo
from planta_interfaces.srv import ObtenerSectores
from planta_interfaces.action import GestionCarga

class Planta(Node):
    def __init__(self):
        super().__init__('planta')
        self.cb_group = ReentrantCallbackGroup()

        self.declare_parameter('potencia_base', 100.0)
        self.potencia_base = float(self.get_parameter('potencia_base').value)

        self.tg = False  # 50
        self.tm = False  # 30
        self.tp = False  # 20
        self.cap_g = 50.0
        self.cap_m = 30.0
        self.cap_p = 20.0

        self.datos_sectores = {}
        self.ultimo_cambio_ms = {}
        self.accion_en_curso = False
        self.cooldown_ms = 500

        # Suscriptor de sectores
        self.subscription = self.create_subscription(
            SectorInfo, '/info_sectores', self.listener_callback, 10,
            callback_group=self.cb_group
        )

        # Publicador de resultado (Aceptado=True / Fallido=False) hacia los sectores
        self.pub_comando = self.create_publisher(SectorInfo, '/comando_sector', 10)

        # Servicio de consulta
        self.srv = self.create_service(
            ObtenerSectores, '/mostrar_sectores', self.servicio_callback,
            callback_group=self.cb_group
        )

        # Servidor y Cliente de Acción
        self.action_server = ActionServer(
            self, GestionCarga, '/gestionar_carga', self.execute_action_callback,
            callback_group=self.cb_group
        )
        self.action_client = ActionClient(
            self, GestionCarga, '/gestionar_carga',
            callback_group=self.cb_group
        )

        self.get_logger().info('Nodo Planta listo (Suscriptor + Servicio + Acción + Control ms).')

    def calcular_potencia_generada(self):
        total = float(self.get_parameter('potencia_base').value)
        if self.tg:
            total += self.cap_g
        if self.tm:
            total += self.cap_m
        if self.tp:
            total += self.cap_p
        return round(total, 2)

    def calcular_potencia_requerida(self):
        total = sum(
            float(info.medicion.potencia)
            for info in self.datos_sectores.values()
            if info.estado
        )
        return float(round(total, 2))

    def obtener_ms_actuales(self):
        return self.get_clock().now().nanoseconds // 1_000_000

    def listener_callback(self, msg: SectorInfo):
        nombre = msg.nombre_sector
        ahora_ms = self.obtener_ms_actuales()
        anterior = self.datos_sectores.get(nombre)

        hubo_cambio = False
        if anterior is None:
            hubo_cambio = True
        elif (
            anterior.estado != msg.estado
            or anterior.medicion.voltaje != msg.medicion.voltaje
            or anterior.medicion.corriente != msg.medicion.corriente
        ):
            hubo_cambio = True

        self.datos_sectores[nombre] = msg

        if not hubo_cambio:
            return

        prev_ms = self.ultimo_cambio_ms.get(nombre, 0)
        delta_ms = ahora_ms - prev_ms
        self.ultimo_cambio_ms[nombre] = ahora_ms

        if delta_ms < self.cooldown_ms:
            self.get_logger().info(f'Cambio rápido en {nombre} ({delta_ms} ms < {self.cooldown_ms} ms), esperando estabilización.')
            return

        pot_gen = self.calcular_potencia_generada()
        pot_req = self.calcular_potencia_requerida()

        en_necesidad = pot_gen < pot_req
        hay_transformador_activo = self.tg or self.tm or self.tp
        en_surplus = ((pot_gen - pot_req) > 20.0) and hay_transformador_activo

        if (en_necesidad or en_surplus) and not self.accion_en_curso:
            self.get_logger().warn(
                f'[{nombre}] Cambio detectado ({delta_ms} ms). Gen: {pot_gen} | Req: {pot_req}. Disparando Acción...'
            )
            self.disparar_accion(nombre, pot_req)

    def disparar_accion(self, sector_origen: str, pot_req: float):
        if not self.action_client.wait_for_server(timeout_sec=1.0):
            self.get_logger().error('Servidor de acción no disponible.')
            return
        self.accion_en_curso = True
        goal = GestionCarga.Goal()
        goal.sector_origen = sector_origen
        goal.potencia_requerida = pot_req
        self.action_client.send_goal_async(goal)

    def execute_action_callback(self, goal_handle):
        sector_obj = goal_handle.request.sector_origen
        potenciaR = self.calcular_potencia_requerida()
        potenciaGe = self.calcular_potencia_generada()

        feedback_msg = GestionCarga.Feedback()
        result = GestionCarga.Result()

        while potenciaGe < potenciaR:
            deficit = potenciaR - potenciaGe
            opciones = []
            if not self.tg:
                opciones.append(("G", abs(deficit - self.cap_g)))
            if not self.tm:
                opciones.append(("M", abs(deficit - self.cap_m)))
            if not self.tp:
                opciones.append(("P", abs(deficit - self.cap_p)))

            if not opciones:
                break

            mejor = min(opciones, key=lambda x: x[1])[0]
            if mejor == "G":
                self.tg = True
                evento = "Activado transformador G (50)"
            elif mejor == "M":
                self.tm = True
                evento = "Activado transformador M (30)"
            else:
                self.tp = True
                evento = "Activado transformador P (20)"

            potenciaGe = self.calcular_potencia_generada()
            feedback_msg.evento = evento
            feedback_msg.estado_transformadores = f"G:{self.tg} | M:{self.tm} | P:{self.tp}"
            feedback_msg.estabilidad_voltaje = round(min(100.0, (potenciaGe / max(potenciaR, 1.0)) * 100.0), 2)
            feedback_msg.potencia_actual = potenciaGe
            goal_handle.publish_feedback(feedback_msg)
            self.get_logger().info(f'[ACTION FEEDBACK] {evento} -> Gen: {potenciaGe}')
            time.sleep(1.0)  # Simula conexión escalonada

        while (potenciaGe - potenciaR) > 20.0:
            excedente = potenciaGe - potenciaR
            opciones = []
            if self.tg and self.cap_g <= excedente:
                opciones.append(("G", excedente - self.cap_g))
            if self.tm and self.cap_m <= excedente:
                opciones.append(("M", excedente - self.cap_m))
            if self.tp and self.cap_p <= excedente:
                opciones.append(("P", excedente - self.cap_p))

            if not opciones:
                break

            mejor = min(opciones, key=lambda x: x[1])[0]
            if mejor == "G":
                self.tg = False
                evento = "Desactivado transformador G (50)"
            elif mejor == "M":
                self.tm = False
                evento = "Desactivado transformador M (30)"
            else:
                self.tp = False
                evento = "Desactivado transformador P (20)"

            potenciaGe = self.calcular_potencia_generada()
            feedback_msg.evento = evento
            feedback_msg.estado_transformadores = f"G:{self.tg} | M:{self.tm} | P:{self.tp}"
            feedback_msg.estabilidad_voltaje = 100.0
            feedback_msg.potencia_actual = potenciaGe
            goal_handle.publish_feedback(feedback_msg)
            self.get_logger().info(f'[ACTION FEEDBACK] {evento} -> Gen: {potenciaGe}')
            time.sleep(1.0)

        cmd = SectorInfo()
        cmd.nombre_sector = sector_obj

        if potenciaGe >= potenciaR:
            cmd.estado = True
            result.exito = True
            result.mensaje = f"Restablecimiento exitoso para {sector_obj}."
            self.get_logger().info(f'[ACTION RESULT] ACEPTADO -> {sector_obj} permanece activo.')
        else:
            cmd.estado = False
            result.exito = False
            result.mensaje = f"Fallo: demanda ({potenciaR}) supera capacidad máxima ({potenciaGe}). {sector_obj} deslastrado."
            self.get_logger().error(f'[ACTION RESULT] FALLIDO -> {sector_obj} pasa a estado False.')

        # Actualizar estado local y notificar al nodo del sector
        if sector_obj in self.datos_sectores:
            self.datos_sectores[sector_obj].estado = cmd.estado
        self.pub_comando.publish(cmd)

        result.potencia_generada_final = potenciaGe
        self.accion_en_curso = False
        goal_handle.succeed()
        return result

    def servicio_callback(self, request, response):
        if not self.datos_sectores:
            response.exito = False
            response.lineas = ["Aun no llegan datos de los sectores a la planta."]
            return response

        response.exito = True
        response.lineas = ["=== ESTADO DE LOS SECTORES ==="]

        for nombre in sorted(self.datos_sectores.keys()):
            s = self.datos_sectores[nombre]
            estado_txt = "ACTIVO" if s.estado else "FALLIDO/INACTIVO"
            linea = (
                f"{nombre} -> Estado: {estado_txt} | "
                f"V: {s.medicion.voltaje} V | I: {s.medicion.corriente} A | P: {s.medicion.potencia} W"
            )
            response.lineas.append(linea)

        response.lineas.append("=== ESTADO DE TRANSFORMADORES Y GENERACION ===")
        response.lineas.append(f"Transformador G (50): {'ACTIVADO' if self.tg else 'DESACTIVADO'}")
        response.lineas.append(f"Transformador M (30): {'ACTIVADO' if self.tm else 'DESACTIVADO'}")
        response.lineas.append(f"Transformador P (20): {'ACTIVADO' if self.tp else 'DESACTIVADO'}")
        response.lineas.append(
            f"Potencia Generada: {self.calcular_potencia_generada()} | Potencia Requerida Activa: {self.calcular_potencia_requerida()}"
        )

        for l in response.lineas:
            self.get_logger().info(l)

        return response

def main(args=None):
    rclpy.init(args=args)
    node = Planta()
    executor = MultiThreadedExecutor()
    executor.add_node(node)
    try:
        executor.spin()
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()