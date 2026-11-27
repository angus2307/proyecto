#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from rcl_interfaces.msg import SetParametersResult

class MyNode(Node):
    def __init__(self):
        super().__init__('sectorA')

       
        self.declare_parameter('voltaje', 12.0)
        self.declare_parameter('corriente', 2.5)
        self.declare_parameter('estado', True)

        self.voltaje = self.get_parameter('voltaje').value
        self.corriente = self.get_parameter('corriente').value
        self.estado = self.get_parameter('estado').value
      
        self.get_logger().info(
            f'Sector a:  | Estado: {self.estado} | V: {self.voltaje} V | I: {self.corriente} A | P: {self.corriente * self.voltaje} W'
        )

        # Escucha cambios mientras el nodo corre
        self.add_on_set_parameters_callback(self.parametros_callback)

    def parametros_callback(self, params):
        for param in params:
            if param.name == 'voltaje':
                self.voltaje = param.value
            elif param.name == 'corriente':
                self.corriente = param.value
            elif param.name == 'estado':
                self.estado = param.value

            self.get_logger().info(
                f'Cambio -> {param.name}: {param.value} | Nueva P: {self.corriente * self.voltaje} W | Estado: {self.estado}'
            )

        return SetParametersResult(successful=True)

def main(args=None):
    rclpy.init(args=args)
    node = MyNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()