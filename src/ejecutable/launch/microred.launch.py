from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='ejecutable',
            executable='planta',
            name='planta',
            output='screen',
            parameters=[{'potencia_base': 100.0}]
        ),
        Node(
            package='ejecutable',
            executable='sectorA',
            name='sectorA',
            output='screen',
            parameters=[{'voltaje': 12.0, 'corriente': 2.5, 'estado': True}]
        ),
        Node(
            package='ejecutable',
            executable='sectorB',
            name='sectorB',
            output='screen',
            parameters=[{'voltaje': 24.0, 'corriente': 1.5, 'estado': True}]
        ),
        Node(
            package='ejecutable',
            executable='sectorC',
            name='sectorC',
            output='screen',
            parameters=[{'voltaje': 48.0, 'corriente': 3.0, 'estado': False}]
        ),
    ])