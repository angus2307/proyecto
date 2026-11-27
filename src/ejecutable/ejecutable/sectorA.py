#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from rcl_interfaces.msg import SetParametersResult
from std_msgs.msg import String

class SectorA(Node):
    def __init__(self):
        super().__init__('sectorA')

        self.declare_parameter('voltaje', 12.0)
        self.declare_parameter('corriente', 2.5)
        self.declare_parameter('estado', True)

        self.voltaje = self.get_parameter('voltaje').value
        self.corriente = self.get_parameter('corriente').value
        self.estado = self.get_parameter('estado').value

        self.publisher_ = self.create_publisher(String, '/info_sectores', 10)
        self.timer = self.create_timer(2.0, self.publicar_datos)
        self.add_on_set_parameters_callback(self.parametros_callback)

        self.get_logger().info(f'Sector A iniciado | V: {self.voltaje}V | I: {self.corriente}A')

    def parametros_callback(self, params):
        for param in params:
            if param.name == 'voltaje':
                self.voltaje = param.value
            elif param.name == 'corriente':
                self.corriente = param.value
            elif param.name == 'estado':
                self.estado = param.value
            self.get_logger().info(f'[Sector A] Cambio -> {param.name}: {param.value}')
        return SetParametersResult(successful=True)

    def publicar_datos(self):
        potencia = round(self.voltaje * self.corriente, 2)
        msg = String()
        msg.data = f"Sector A|{self.estado}|{self.voltaje}|{self.corriente}|{potencia}"
        self.publisher_.publish(msg)

def main(args=None):
    rclpy.init(args=args)
    node = SectorA()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
