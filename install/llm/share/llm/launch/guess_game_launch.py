from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='llm',
            executable='guess_game',
            name='guess_game'
        ),
        Node(
            package='audio',
            executable='text_to_speech',
            name='text_to_speech'
        ),
        Node(
            package='audio',
            executable='speech_to_text',
            name='speech_to_text'
        ),
        Node(
            package='ros_tcp_endpoint',
            executable='default_server_endpoint',
            name='default_server_endpoint',
            parameters=[{'ROS_IP': '0.0.0.0'}]
        )
    ])