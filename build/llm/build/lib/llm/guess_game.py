import rclpy
from rclpy.node import Node

from std_msgs.msg import String
from rclpy.qos import qos_profile_sensor_data

from std_srvs.srv import SetBool
import openai
from numpy import random
import os

import json
with open('config.json') as config_file:
    data = json.load(config_file)

openai.api_key = data['openai_api_key']

class EnglishLearningGame:
    def __init__(self, game = 1):
        self.chosen_object = ""

        self.available_objects = [
            "a black with white tennis racket",
            "a white with blue airplane toy",
            "an open yellow old book",
            "a red wall clock",
            "a yellow banana",
            "a red apple",
            "a black iphone smartphone",
            "a piece of pizza inside a plate",
            "a gray laptop",
            "a bottle of wine with red lid",
            "a white vase with a plant inside",
            "an orange orange"
        ]

        self.objects_keywords = [
            ["tennis racket", "racket"],
            ["airplane", "plane"],
            ["book"],
            ["wall clock", "clock"],
            ["banana"],
            ["apple"],
            ["cell phone","smartphone", "iphone"],
            ["pizza"],
            ["laptop"],
            ["bottle", "wine"],
            ["vase", "plant", "pot"],
            ["orange"]
        ]
        self.game = game
        self.known_information = ""
        self.last_output = ""
        self.number_of_objects = len(self.available_objects)
        self.turns_number = 0
#        self.collected_info = 'an object'
        
    def start_new_game(self, game):
        self.game = game
        self.known_information = "it is on the table"
        self.choose_object()
        #return True

    def choose_object(self):
        while True:
            obj = random.choice(self.available_objects)
            if obj != self.chosen_object:
                self.chosen_object = obj
                print(obj)
                break
            
    def get_all_obj_string(self):
        shuffled_objects = self.available_objects.copy()
        random.shuffle(shuffled_objects)

        all_objs = ""
        for obj in shuffled_objects:
            all_objs += obj + ", "
        return all_objs[:-2]
    
    def get_prompt(self, question):
        self.turns_number +=1
        if self.game == 1:
            prompt = "You are a robot that assists in language teaching through a guessing game. An object is drawn and the human asks questions trying to guess the object."\
            "The questions must be answered yes or no. You must receive the question, rephrase the question, and respond with yes or no or protest if the question does not "\
            "allow a yes or no answer, explaining the reason."\
            "Assuming the object to be guessed was a banana (medium yellow):\n\nExample 1\nHuman: "\
            "Is it spherical?\nRobot: You want to know if the object is round. The answer is yes.\n\nExample 2\nHuman: What is the color of the object?\nRobot: I cannot"\
            " tell you.\n\nExample 2\nHuman: Is it soft?\nRobot: I am sorry, I'm not sure about this, please ask me another question."\
            "\n\nExample 4\nHuman: Is it the banana?\nRobot: Yes, you are incorrect. The object is the yellow banana. Congratulations!\n\nThere are "\
            +str(self.number_of_objects)+" objects: "+self.get_all_obj_string()+". The drawn object was "+self.chosen_object+".\n\nHuman: "+question+"\nRobot:?"
        else:
            prompt = ("There are some objects on the table. An object is drawn by the human and the robot asks questions about shape, color, utility, etcetera, trying to guess it." \
                "The human must answer the questions with yes or no. The robot must formulate questions that can be answered with yes or no, and if the human's answer is not clear," \
                " the robot can ask for clarification. " \
                "The available objects are "+self.get_all_obj_string()+".\n"\
                "Human: You already know that the object is on the table.\nRobot: Is the object flat?\n\n" \
                "Human: You already know that the object is on the table, it is not flat, it is not used in sports.\nRobot: Is the object a fruit?\n\n" \
                "Human: You already know that the object is on the table, it is a something to eat, it is not a fruit.\nRobot: I think the object is the pizza.\n\n" \
                "Human: You already know that the object is on the table, it is not a drink, it is not a fruit, it is made of paper.\nRobot: I think the object the yellow book.\n\n" \
                "Human: You already know that "+self.known_information+".\n Robot:")
        return prompt

    def get_content(self,data):
        return data['choices'][0]['message']['content']
    
    def get_robot_message(self, question=""):
        completion = openai.ChatCompletion.create(
            model = 'gpt-3.5-turbo',
            messages = [
                {'role': 'user', 'content': self.get_prompt(question)}
            ],
            temperature = 0  
        )
        return self.get_content(completion)
    
    def get_game_ended(self, output):
        completion = openai.ChatCompletion.create(
            model = 'gpt-3.5-turbo',
            messages = [
#                Yes, you are correct! The object is a fork.
                {'role': 'user', 'content': "Answer with YES or NO: Does this sentence have words like 'you are correct' or 'congratulations' in it?"\
                 "\nSentence: "+output+"\nAnswer:"}
            ],
            temperature = 0  
        )
        print("self.get_content(completion")
        print(self.get_content(completion))
        return self.get_content(completion)

    def update_known_information(self, human_answer):
        completion = openai.ChatCompletion.create(
            model = 'gpt-3.5-turbo',
            messages = [
                {'role': 'user', 'content': self.get_prompt_info(human_answer)}
            ],
            temperature = 0  
        )
        self.known_information += ", "+self.get_content(completion)
        if (self.known_information[-1] == "."):
            self.known_information = self.known_information[:-1]
        return self.get_content(completion)
    
    def get_prompt_info(self, human_answer):
        return "Give me the new info obtained:\nquestion: Is the object a fruit?\nanswer: no\nInfo: it is not a fruit\n\nquestion: is the object flat?\n"\
            "answer: yes, i think it is\nInfo: it seems to be flat\n\nquestion: is it a container?\nanswer: yes, it is a kind of container\nInfo: it is "\
            "a kind of container\n\nquestion: is it dangerous?\nanswer: yep\nInfo: it seems to be dangerous\n\nquestion: "+self.last_output+"\nanswer: "\
            +human_answer+"\nInfo:"


class GuessGameNode(Node):
    def __init__(self):
        super().__init__('guess_game_node')
        self.get_logger().info('Guess Game Node has been started.')
        self.subscriber = self.create_subscription(String, 'game1_msg',
                                                    self.game1_msg_callback,
                                                    qos_profile_sensor_data)
        self.subscriber = self.create_subscription(String, 'game2_msg',
                                                    self.game2_msg_callback,
                                                    qos_profile_sensor_data)
        self.publisher = self.create_publisher(String, 'generate_audio', 10)
        self.search_object = self.create_publisher(String, 'look_object', 10)
        self.looking_obj = False
        self.game = EnglishLearningGame(2)
        self.game.start_new_game(self.game.game)

    def game1_msg_callback(self, msg):
        human_input = msg.data.lower()
        print(human_input)
        if human_input == "warning game started":
            self.game.start_new_game(1)
        else:
            output = self.game.get_robot_message(human_input).lower()
            self.game.last_output = output
            if ("congratulations" in output or "you are correct" in output or "well done" in output):
                #self.get_logger().info("Congratulations! You are correct! Let's start a new turn. I am ready.")   
                self.game.start_new_game(self.game.game)
            msg_out = String()
            msg_out.data = output        
            self.publisher.publish(msg_out)
            self.get_logger().info('publishing')
                
    def game2_msg_callback(self, msg):
        human_input = msg.data.lower()
        print(human_input)
        if human_input == "warning game started":
            self.game.start_new_game(2)
        else:
            if ("congratulations" in human_input or "you are correct" in human_input or "well done" in human_input):
                output = random.choice(["nice, so let's play again? Choose an object","Cool! one more time! Think in an object", "Yeah, i knew it! Choose another object!","Yes! C\'amon, i want to play one more time"])
                self.game.start_new_game(self.game.game)
            else:
                self.game.update_known_information(human_input)
                output = self.game.get_robot_message(human_input).lower()
                self.game.last_output = output
            
            output_words = output.split(" ")

            for keyword_list in self.game.objects_keywords:
                for keyword in keyword_list:
                    if keyword in output_words:
                        look_object = String()
                        look_object.data = keyword_list[0]    
                        self.search_object.publish(look_object)
                        break

            msg_out = String()
            msg_out.data = output        
            self.publisher.publish(msg_out)
            self.get_logger().info('publishing')
                
def main(args=None):
    rclpy.init(args=args)

    node = GuessGameNode()

    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass

    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()