from unity_robotics_demo_msgs.msg import Audio
import rclpy
from rclpy.node import Node
import numpy as np
import scipy.io.wavfile as wav

class AudioPublisher(Node):

    def __init__(self):
        super().__init__('audio_publisher')
        self.publisher_ = self.create_publisher(Audio, 'audio', 10)
        timer_period = 8  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)

    def timer_callback(self):
        msg = Audio()
        fs, data = wav.read('audio.wav')
        msg.data = data.tolist()
        self.publisher_.publish(msg)
        self.get_logger().info('Publishing an audio message')

def main(args=None):
    rclpy.init(args=args)

    audio_publisher = AudioPublisher()

    rclpy.spin(audio_publisher)

    audio_publisher.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()