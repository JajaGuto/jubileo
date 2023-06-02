import rclpy
from rclpy.node import Node

from std_msgs.msg import String
from rclpy.qos import qos_profile_sensor_data

from std_srvs.srv import SetBool
import openai
from numpy import random
import os
from unity_robotics_demo_msgs.msg import JointsToTarget

import json
with open('config.json') as config_file:
    data = json.load(config_file)

openai.api_key = data['openai_api_key']

class ClosedEyesGame:
    def __init__(self):
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
            ["airplane toy", "toy", "plane", "airplane"],
            ["book", "old book"],
            ["wall clock", "clock"],
            ["banana", "yellow banana"],
            ["apple", "red apple"],
            ["iphone smartphone", "smartphone", "iphone"],
            ["pizza", "piece of pizza", "slice of pizza", "pizza in a plate"],
            ["laptop", "gray laptop"],
            ["wine", "bottle of wine", "wine with red lid", "bottle"],
            ["vase", "white vase", "plant", "pot"],
            ["orange", "orange orange"]
        ]
        self.known_information = ""
        self.number_of_objects = len(self.available_objects)
        self.turns_number = 0
        self.eyes_closed = False
#        self.collected_info = 'an object'
        
    def start_new_game(self):
        self.known_information = "the object is on the table"
        #return True
            
    def get_all_obj_string(self):
        shuffled_objects = self.available_objects.copy()
        random.shuffle(shuffled_objects)

        all_objs = ""
        for obj in shuffled_objects:
            all_objs += obj + ", "
        return all_objs[:-2]
    
    def get_prompt(self):
        prompt = ("There are some objects on the table. An object is drawn by the human, this one gives information about the objects, and the robot tries to guess." \
                "The available objects on the table are "+self.get_all_obj_string()+".\n"\
                "Human: You already know that the object is on the table.\nRobot: Give me more information.\n\n" \
                "Human: You already know that the object is on the table, it is not flat, it is not used in sports.\nRobot: I don't know the object yet, give me more info\n\n" \
                "Human: You already know that the object is on the table, it is a something to eat, it is not a fruit.\nRobot: I think the object is the pizza. Am I right?\n\n" \
                "Human: You already know that the object is on the table, it is not a drink, it is not a fruit, it is made of paper.\nRobot: I am pretty sute the object is the yellow book. Isn't it?\n\n" \
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

    def update_known_information(self, human_answer):
        self.known_information += ", "+human_answer
        if (self.known_information[-1] == "."):
            self.known_information = self.known_information[:-1]

class ClosedEyesGameNode(Node):
    def __init__(self):
        super().__init__('closed_eyes_game_node')
        self.get_logger().info('Closed Eyes Game Node has been started.')
        self.subscriber = self.create_subscription(String, 'game3_msg',
                                                    self.game3_msg_callback,
                                                    qos_profile_sensor_data)
        self.publisher = self.create_publisher(String, 'generate_audio', 10)
        self.joints_publisher = self.create_publisher(JointsToTarget, 'joints_to_target', 10)

        self.game = ClosedEyesGame()

    def game3_msg_callback(self, msg):
        human_input = msg.data.lower()
        print(human_input)
        if human_input == "warning game started":
            self.game.start_new_game()
        else:
            output = ""
            if not self.game.eyes_closed:
                output = random.choice([
                        "Now I will close my eyes. Pick up an object, and give me small information about it!",
                        "I'm shutting my virtual eyes now. Go ahead and choose an object, then share some details about it.",
                        "Time to close my eyes! While I'm 'blindfolded', please pick an object and begin describing it.",
                        "Okay, my eyes are closed now. Select one of the objects and start giving me clues about it.",
                        "I'm 'looking away' at this moment. Grab an object and start providing some information about it."
                    ])
                #closing eyes
                msg = JointsToTarget()
                msg.joints = [14,24]
                msg.targets = [100.,100.]
                self.joints_publisher.publish(msg)
                self.game.eyes_closed = True
            elif ("congratulations" in human_input or "you are correct" in human_input or "well done" in human_input):
                #opening eyes
                msg = JointsToTarget()
                msg.joints = [14,24]
                msg.targets = [0.,0.]
                self.joints_publisher.publish(msg)
                self.game.eyes_closed = False
                output = random.choice(["Nice, so let's play again? Choose an object","Cool! one more time! Think in an object", "Yeah, i knew it! Choose another object!","Yes! C\'amon, i want to play one more time"])
                self.game.start_new_game(self.game.game)
            else:
                self.game.update_known_information(human_input)
                output = self.game.get_robot_message(human_input).lower()
            
            msg_out = String()
            msg_out.data = output        
            self.publisher.publish(msg_out)
            self.get_logger().info('publishing')
                
def main(args=None):
    rclpy.init(args=args)

    node = ClosedEyesGameNode()

    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass

    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()