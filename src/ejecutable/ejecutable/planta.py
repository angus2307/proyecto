#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from std_msgs.msg import String
from planta_interfaces.srv import ObtenerSectores

class Planta(Node):
    def __init__(self):
        super().__init__('planta')
        self.datos_sectores = {}

        # Suscriptor que recibe los datos de Sector A, B y C
        self.subscription = self.create_subscription(
            String,
            '/info_sectores',
            self.listener_callback,
            10
        )

        # Servidor de servicio que devuelve la información línea por línea
        self.srv = self.create_service(
            ObtenerSectores,
            '/mostrar_sectores',
            self.servicio_callback
        )
        self.get_logger().info('Nodo Planta activo y esperando datos de los sectores...')

    def listener_callback(self, msg):
        partes = msg.data.split('|')
        if len(partes) == 5:
            nombre, estado, v, i, p = partes
            self.datos_sectores[nombre] = (
                f"Estado: {estado} | V: {v} V | I: {i} A | P: {p} W"
            )

    def servicio_callback(self, request, response):
        if not self.datos_sectores:
            response.exito = False
            response.lineas = ["Aun no llegan datos de los sectores a la planta."]
            self.get_logger().warn("Servicio llamado, pero aun no hay datos recibidos.")
            return response

        response.exito = True
        response.lineas = []

        self.get_logger().info("=== ESTADO DE LOS 3 SECTORES EN PLANTA ===")
        for sector in sorted(self.datos_sectores.keys()):
            linea = f"{sector} -> {self.datos_sectores[sector]}"
            response.lineas.append(linea)
            self.get_logger().info(linea)

        return response

def main(args=None):
    rclpy.init(args=args)
    node = Planta()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
