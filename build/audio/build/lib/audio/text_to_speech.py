from unity_robotics_demo_msgs.msg import Audio
import rclpy
from rclpy.node import Node
import numpy as np
import scipy.io.wavfile as wav
from google.cloud import texttospeech
from pydub import AudioSegment
from std_msgs.msg import String
from rclpy.qos import qos_profile_sensor_data



class TextToSpeech(Node):

    def __init__(self):
        super().__init__('audio_publisher')
        
        # Instantiates a client
        self.client = texttospeech.TextToSpeechClient(client_options={"api_key": "AIzaSyDmDeVSEnYsyBtCztCFfZm6_R7TzmT-Kp8"})

        self.command_sub = self.create_subscription(
            String,
            'generate_audio',
            self.generate_speech,
            qos_profile_sensor_data)

        self.publisher_ = self.create_publisher(Audio, 'robot_audio', 10) 

    def generate_speech(self, msg):
        text_message = msg.data

        # Set the text input to be synthesized
        synthesis_input = texttospeech.SynthesisInput(text=text_message)

        # Build the voice request, select the language code ("en-US") and the ssml
        # voice gender ("neutral")
        voice = texttospeech.VoiceSelectionParams(
            language_code="en-US", 
            name="en-US-Wavenet-I", 
            ssml_gender=texttospeech.SsmlVoiceGender.NEUTRAL
        )   

        # Select the type of audio file you want returned
        audio_config = texttospeech.AudioConfig(
            audio_encoding=texttospeech.AudioEncoding.MP3,
            speaking_rate=0.8
        )

        # Perform the text-to-speech request on the text input with the selected
        # voice parameters and audio file type
        response = self.client.synthesize_speech(
            input=synthesis_input, voice=voice, audio_config=audio_config
        )

        # The response's audio_content is binary.
        with open("output.mp3", "wb") as out:
            # Write the response to the output file.
            out.write(response.audio_content)
            print('Audio content written to file "output.mp3"')
        
        """
        msg = Audio()
        #fs, data = wav.read('audio.wav')
        msg.data = response.tolist()
        self.publisher_.publish(msg)
        self.get_logger().info('Publishing an audio message')"""

        
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

    tts = TextToSpeech()

    rclpy.spin(tts)

    tts.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()