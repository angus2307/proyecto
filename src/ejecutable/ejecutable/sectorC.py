#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from rcl_interfaces.msg import SetParametersResult
from planta_interfaces.msg import SectorInfo, MedicionElectrica

class SectorC(Node):
    def __init__(self):
        super().__init__('sectorC')
        self.nombre = "Sector C"

        self.declare_parameter('voltaje', 48.0)
        self.declare_parameter('corriente', 3.0)
        self.declare_parameter('estado', False)

        self.voltaje = float(self.get_parameter('voltaje').value)
        self.corriente = float(self.get_parameter('corriente').value)
        self.estado = bool(self.get_parameter('estado').value)

        self.publisher_ = self.create_publisher(SectorInfo, '/info_sectores', 10)
        self.sub_estado = self.create_subscription(
            SectorInfo, '/comando_sector', self.comando_callback, 10
        )

        self.timer = self.create_timer(2.0, self.publicar_datos)
        self.add_on_set_parameters_callback(self.parametros_callback)
        self.get_logger().info(f'{self.nombre} iniciado | V: {self.voltaje}V | I: {self.corriente}A')

    def publicar_datos(self):
        potencia = round(self.voltaje * self.corriente, 2)
        msg = SectorInfo()
        msg.nombre_sector = self.nombre
        msg.estado = self.estado
        msg.medicion = MedicionElectrica(
            voltaje=self.voltaje,
            corriente=self.corriente,
            potencia=potencia
        )
        self.publisher_.publish(msg)

    def comando_callback(self, msg: SectorInfo):
        if msg.nombre_sector == self.nombre:
            self.estado = msg.estado
            texto = "ACEPTADO (Activo)" if self.estado else "FALLIDO (Deslastrado)"
            self.get_logger().warn(f'[{self.nombre}] Respuesta de Planta -> {texto}')

    def parametros_callback(self, params):
        for param in params:
            if param.name == 'voltaje':
                self.voltaje = float(param.value)
            elif param.name == 'corriente':
                self.corriente = float(param.value)
            elif param.name == 'estado':
                self.estado = bool(param.value)
            self.get_logger().info(f'[{self.nombre}] Cambio -> {param.name}: {param.value}')
        return SetParametersResult(successful=True)

def main(args=None):
    rclpy.init(args=args)
    node = SectorC()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()