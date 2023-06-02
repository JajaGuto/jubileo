import rclpy
from rclpy.node import Node
import time

from std_msgs.msg import String
from rclpy.qos import qos_profile_sensor_data

from std_srvs.srv import SetBool
import openai
from numpy import random
from langchain.memory import ChatMessageHistory
from langchain.memory import ConversationBufferMemory
# from langchain.llms import OpenAI
from langchain.chat_models import ChatOpenAI
from langchain.chains import ConversationChain
import os

import json
with open('config.json') as config_file:
    data = json.load(config_file)

openai.api_key = data['openai_api_key']
os.environ["OPENAI_API_KEY"] = data['openai_api_key']

class PlayerRobot:
    def __init__(self, name="Jubileo"):
        self.name = name
        self.actual_game = 0
        self.llm = ChatOpenAI(temperature=0, model_name="gpt-3.5-turbo")
        self.conversation = ConversationChain(
            llm=self.llm,
            #stop='\nHuman',
            verbose=True,
            memory=ConversationBufferMemory(return_messages=True)
        )

    def introduce(self):
        introduction =  f"Hello! I am {self.name}, a humanoid robot. Let's play some games to learn English together! If you have "\
                    "any questions, you can ask me! If you want to start a game, the options are on the screen! "\
                    "I'm here to help you! Let's have fun!"
        self.feed_memory("Who are you?",introduction)
        return introduction

    def start_new_game(self, publisher, game = 1):
        self.actual_game = game
        instructions = ''
        if game == 1:
            instructions = "Let's play the game one! This game is called guess game! Can you see that there are some "\
                "objects on the table? So, I will choose an object, and you will make me questions in order to figure "\
                "out what are the object! I will answer with no or yes! And when you feel confident, try to guess!"
        elif game == 2:
            instructions = "Ready for game two? This time, you will choose an object from the table and I'll be the one "\
                "asking the questions. I'll try to guess the object based on your responses. Remember, I can only "\
                "answer with yes or no. Let's start when you're ready!"
        elif game == 3:
            instructions = "Game three is all about your description skills! I will close my eyes, and you will pick and"\
                " describe an object to me, as I won't be able to see it. Try to give as much detail as you can, and I will "\
                "guess the object based on your description. Ready to get started?"
        elif game == 4:
            instructions = "Time for game four! In this game, I'll be your virtual travel guide. I'll pick a random "\
                "country and provide you with some interesting facts about it. Your task is to guess the country based "\
                "on these clues. It's a great way to learn more about the world while practicing your English. Let's "\
                "get started!"
        msg_out = String()
        msg_out.data = instructions   
        publisher.publish(msg_out)

    def feed_memory(self,user_msg,ai_msg):
        self.conversation.memory.chat_memory.add_user_message(user_msg)
        self.conversation.memory.chat_memory.add_ai_message(ai_msg)
        
    def end_game(self,publisher):
        robot_msg = "Nice, feel free to talk with me or choose another game to play!"
        self.feed_memory("We played the game and it was fun.",robot_msg)
        self.actual_game = 0
        msg_out = String()
        msg_out.data = robot_msg   
        publisher.publish(msg_out)

class ConversationNode(Node):
    def __init__(self):
        super().__init__('conversation_node')
        self.get_logger().info('Guess Game Node has been started.')
        self.subscriber = self.create_subscription(String, 'human_message',
                                                    self.human_message_callback,
                                                    qos_profile_sensor_data)
        self.publisher = self.create_publisher(String, 'generate_audio', 10)
        self.game1_publisher = self.create_publisher(String, 'game1_msg', 10)
        self.game2_publisher = self.create_publisher(String, 'game2_msg', 10)
        self.game3_publisher = self.create_publisher(String, 'game3_msg', 10)
        self.game4_publisher = self.create_publisher(String, 'game4_msg', 10)

        #self.conversation = Conversation()
        
        self.robot = PlayerRobot()

        time.sleep(4)
        introduction_msg = self.robot.introduce()
        msg_out = String()
        msg_out.data = introduction_msg        
        self.publisher.publish(msg_out)

        #self.game.start_new_game(self.game.game)

    def human_message_callback(self, msg):
        human_input = msg.data.lower()
        print(human_input)
        
        if self.robot.actual_game == 0:
            if ('play' in human_input or 'start' in human_input) and 'game' in human_input:
                msg_out = String()
                msg_out.data = "warning game started"      
                if 'two' in human_input or 'second' in human_input:
                    self.robot.start_new_game(self.publisher, 2)
                    self.game2_publisher.publish(msg_out)
                elif 'three' in human_input or 'third' in human_input:
                    self.robot.start_new_game(self.publisher, 3)
                    self.game3_publisher.publish(msg_out)
                elif 'four' in human_input or 'fourth' in human_input:
                    self.robot.start_new_game(self.publisher, 4)
                    self.game4_publisher.publish(msg_out)
                elif 'one' in human_input or 'first' in human_input:
                    self.robot.start_new_game(self.publisher, 1)
                    self.game1_publisher.publish(msg_out)

            # if user did not select any game
            if self.robot.actual_game == 0:
                output = self.robot.conversation.predict(input=human_input)
                print(output)
                msg_out = String()
                msg_out.data = output        
                self.publisher.publish(msg_out)
        else:
            if ('end game' in human_input or 'stop play' in human_input or "don't want to play" in human_input):
                self.robot.end_game(self.publisher)
            else:
                msg_out = String()
                msg_out.data = human_input    
                if self.game.game == 1:
                    self.game1_publisher.publish(human_input)
                if self.game.game == 2:
                    self.game2_publisher.publish(human_input)
                if self.game.game == 3:
                    self.game3_publisher.publish(human_input)
                if self.game.game == 4:
                    self.game4_publisher.publish(human_input)

def main(args=None):
    rclpy.init(args=args)

    node = ConversationNode()

    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass

    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()

