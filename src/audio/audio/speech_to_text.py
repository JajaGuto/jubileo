# from hmac import trans_5C
from unity_robotics_demo_msgs.msg import Audio
import rclpy
from rclpy.node import Node
from std_msgs.msg import String
from rclpy.qos import qos_profile_sensor_data
import scipy.io.wavfile as wf
import numpy as np
import os
import sys
from utils import utils
 

from google.cloud import speech_v1 as speech
client = speech.SpeechClient.from_service_account_file('stt_key.json')

class AudioSubscriber(Node):

    def __init__(self):
        super().__init__('audio_subscriber')
        self.subscription = self.create_subscription(
            Audio,
            'audio',
            self.listener_callback,
            qos_profile_sensor_data)
            
        self.follow_color_pub = self.create_publisher(String, 'follow_command', 10)
        self.facial_expression_pub = self.create_publisher(String, 'facial_expression_command', 10)
        self.tts_pub = self.create_publisher(String, 'text_to_speech', 10)
        self.message_to_llm = self.create_publisher(String, 'human_message', 10)
        self.debug_pub = self.create_publisher(String, 'debug_topic', 10)
        
        self.following_color = False
        
        self.audio_utils = utils.AudioUtils()

        self.subscription  # prevent unused variable warning
        self.fs = 44100
        # self.language = 'pt-BR'
        self.language = 'en-US'
        
    def listener_callback(self, audio):
        
        if(len(audio.data)>1):
            # self.get_logger().info(f'received: {audio.data}')

            wf.write('audio.wav', self.fs, np.array(audio.data))
            os.remove('audio.mp3')
            command = f"ffmpeg -i audio.wav -vn -ar 44100 -ac 1 -b:a 192k audio.mp3"
            os.system(command)
            with open('audio.mp3', 'rb') as f:
                mp3_data = f.read()
            response = self.get_audio_description(mp3_data)
        
            transcript = ''

            for result in response.results:
                transcript += result.alternatives[0].transcript
        
            transcript = self.audio_utils.clean_stt_text(transcript)

            
            print(f"Transcript type: {type(transcript)}, value: {transcript}")
            
            if (transcript != ''):
                debug = String()
                debug.data = 'wSpeech: '+transcript
                self.debug_pub.publish(debug)
                human_msg = String()
                human_msg.data = transcript
                self.message_to_llm.publish(human_msg)
                

            """
            if 'look at me' in transcript:
                    msg = String()
                    msg.data = 'face'
                    self.follow_color_pub.publish(msg)
            
            elif 'know me' in transcript:
                    msg = String()
                    msg.data = 'recognition'
                    self.follow_color_pub.publish(msg)

            elif 'i look' in transcript:
                    msg = String()
                    msg.data = 'expression'
                    self.follow_color_pub.publish(msg)

            elif 'grab the object' in transcript:
                    msg = String()
                    msg.data = 'grab'
                    self.follow_color_pub.publish(msg)
            
            else:

                follow = self.audio_utils.is_follow_command(transcript, self.language)
                color = self.audio_utils.is_color_command(transcript, self.language)

                if not follow:
                    if self.audio_utils.is_stop_command(transcript, self.language):
                        
                        tts = String()
                        tts.data = 'i_am_stoping_right_now'
                        self.tts_pub.publish(tts)
                        
                        msg = String()
                        msg.data = ''
                        self.follow_color_pub.publish(msg)
                        self.following_color = False
                    
                    elif self.audio_utils.is_facial_expression_command(transcript, self.language):
                        
                        msg = String()
                        msg.data = 'all'
                        self.facial_expression_pub.publish(msg)
                        

                if follow and color != '':
                    
                    tts = String()
                    tts.data = 'okay_understood i_am_looking_to_the '+color
                    self.tts_pub.publish(tts)

                    msg = String()
                    msg.data = color
                    self.follow_color_pub.publish(msg)

                    debug = String()
                    debug.data = 'iFollow color: '+color
                    self.debug_pub.publish(debug)

                    self.following_color = True
"""

    def get_audio_description(self, audioBytes):
        audio_file = speech.RecognitionAudio(content=audioBytes)
        config = speech.RecognitionConfig(
            sample_rate_hertz=self.fs,
            enable_automatic_punctuation=False,
            language_code=self.language
        )

        response = client.recognize(
            config=config,
            audio=audio_file
        )
        return response

def main(args=None):
    rclpy.init(args=args)

    audio_subscriber = AudioSubscriber()

    rclpy.spin(audio_subscriber)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    audio_subscriber.destroy_node()
    rclpy.shutdown()



if __name__ == '__main__':
    main()