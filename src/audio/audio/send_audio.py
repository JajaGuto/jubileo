from unity_robotics_demo_msgs.msg import Audio
import rclpy
from rclpy.node import Node
import numpy as np
import scipy.io.wavfile as wav
import os
from pydub import AudioSegment

class AudioPublisher(Node):

    def __init__(self):
        super().__init__('audio_publisher')
        self.publisher_ = self.create_publisher(Audio, 'robot_audio', 10)
        timer_period = 5  # seconds
        self.timer = self.create_timer(timer_period, self.timer_callback)

    def timer_callback(self):
        msg = Audio()

        sound = AudioSegment.from_mp3("output.mp3")
        sound = sound.set_frame_rate(44100)
        sound.export("output_jub.wav", format="wav")

        samplerate, data = wav.read('output_jub.wav')
        
        msg.data = np.float32(data*0.000030514).tolist()
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