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

class CountriesGame:
    def __init__(self):
        self.chosen_country = ""
                
        self.countries = [
            "united states", "united kingdom", "germany", "france", "china",
            "japan", "russia", "brazil", "india", "canada",
            "australia", "italy", "spain", "mexico", "south korea",
            "saudi arabia", "turkey", "egypt", "south africa", "argentina",
            "netherlands", "sweden", "switzerland", "greece", "thailand",
            "vietnam", "new zealand", "israel", "united arab emirates", "singapore"
        ]
        self.already_chosen = []
        self.curiosities = []
        self.curiosities_counter = -1
        
    def start_new_game(self):
        if len(self.already_chosen) == len(self.countries):
            self.already_chosen = []
        while True:
            self.chosen_country = random.choice(self.countries)
            if self.chosen_country not in self.already_chosen:
                break
        self.already_chosen.append(self.chosen_country)
        self.curiosities = self.generate_curiosities()
        self.curiosities_counter = 0

    def generate_curiosities(self):
        completion = openai.ChatCompletion.create(
            model = 'gpt-4',
            messages = [
                {'role': 'user', 'content': self.get_first_prompt()}
            ],
            temperature = 0  
        )
        output = self.get_content(completion)
        completion = openai.ChatCompletion.create(
            model = 'gpt-4',
            messages = [
                {'role': 'user', 'content': self.get_second_prompt(output)}
            ],
            temperature = 0  
        )
        #returning list of 5 curiosities, in order of hard to easy
        return self.get_content(completion).split('\\')[::-1]

    def get_first_prompt(self):
        return """Give 5 curiosities in popularity order. Remember, the first curiosity must be more complex and less well-knowed, and the other more well known curiosity.  Replace the country name for "this country" , you can not reveal city names, you must divide each with "\". 

                Country: Spain
                Curiosities: This country is known for its lively and passionate dance style called flamenco.\This country is famous for its delicious cuisine, including dishes like paella and tapas.\This country is home to famous artists like Pablo Picasso and Salvador Dalí, who have made significant contributions to the world of art.\The running of the bulls, known as "San Fermín," is a famous festival held in one of its cities.\It is home to one of the most famous football clubs in the world, FC Barcelona.

                Country: Japan
                Curiosities: This country is known for its technological innovation and futuristic cities.\This nation has a rich tradition of tea ceremonies, which are elegant and highly ritualized events.\It is famous for its bullet trains, which are known for their speed and efficiency.\Cherry blossoms, known as sakura, are a significant cultural symbol and attract tourists during the spring season.\It is the birthplace of sushi, a popular dish worldwide.

                Country: Brazil
                Curiosities:This country is the largest producer of coffee in the world, a position it has held for the last 150 years.\This country's population has a deep love for football and has produced many of the game's biggest stars, including Pele and Neymar.\The Amazon Rainforest, one of the most biodiverse places on the planet, is largely located within this country.\Carnival is a significant cultural event in this country, featuring colorful parades, costumes, and samba dancing.\This country is home to the iconic Christ the Redeemer statue, one of the New Seven Wonders of the World.

                Country: """\
        +self.chosen_country +"\nCuriosities:"


    def get_second_prompt(self, curiosities):
        return """Ordenate this 5 curiosities about the country, being the first the most popular and well-known among people, and the last, the most unknow. Also, replace country name for "This place", if the country capital is mentioned, omit its name:

                Country: Spain
                input: This country is known for its lively and passionate dance style called flamenco.\This country is famous for its delicious cuisine, including dishes like paella and tapas.\This country is home to famous artists like Pablo Picasso and Salvador Dalí, who have made significant contributions to the world of art.\The running of the bulls, known as "San Fermín," is a famous festival held in one of its cities.\It is home to one of the most famous football clubs in the world, FC Barcelona.
                output:This place is home to one of the most famous football clubs in the world, FC Barcelona.\This country is famous for its delicious cuisine, including dishes like paella and tapas.\This country is known for its lively and passionate dance style called flamenco.\It is home to famous artists like Pablo Picasso and Salvador Dalí, who have made significant contributions to the world of art.\The running of the bulls, known as "San Fermín," is a famous festival held in one of its cities.

                country:  """\
        +self.chosen_country+"\ninput:"+curiosities+"\noutput:"

    def get_content(self,data):
        return data['choices'][0]['message']['content']


    

class CountriesGameNode(Node):
    def __init__(self):
        super().__init__('countries_game_node')
        self.get_logger().info('Countries Game Node has been started.')
        self.subscriber = self.create_subscription(String, 'game4_msg',
                                                    self.game4_msg_callback,
                                                    qos_profile_sensor_data)
        self.publisher = self.create_publisher(String, 'generate_audio', 10)
        self.game = CountriesGame()



    def game4_msg_callback(self, msg):
        human_input = msg.data.lower()
        print(human_input)
        if human_input == "warning game started":
            self.game.start_new_game()
        else:
            restart = False
            output = ""
            if (self.game.chosen_country in human_input and self.game.curiosities_counter>0):
                if self.game.curiosities_counter == 4:
                    output = "You are correct! The last curiosity about "+self.game.chosen_country+" was: "+self.game.curiosities[4]+"! "
                elif self.game.curiosities_counter < 4:
                    output = "You are correct! The other curiosities about "+self.game.chosen_country+" were: "
                    for i in range(self.game.curiosities_counter):
                        output += self.game.curiosities[len(self.game.curiosities)-i]+"! "
                else:
                    output = "That's right! The country was "+self.game.chosen_country+"! "
                output+= random.choice(["Well done, so let's play again? I already chose a country","Very good! one more time! Can I start?",
                                         "Good job! Can you play with other country!","Good, i want to play one more time"])
                restart = True
            elif self.game.curiosities_counter < 5:
                if self.game.curiosities_counter == 0:
                    output = "First curiosity: "
                elif self.game.curiosities_counter == 1:
                    output = "Second curiosity: "
                elif self.game.curiosities_counter == 2:
                    output = "Third curiosity: "
                elif self.game.curiosities_counter == 3:
                    output = "Fourth curiosity: "
                elif self.game.curiosities_counter == 4:
                    output = "Fifth curiosity: "
                output += self.game.curiosities[self.game.curiosities_counter]
                self.game.curiosities_counter+=1 
            else:
                #robot already said all the curiosities
                output = "The country was "+self.game.chosen_country+"! But don't worry, you will get the next one! Are you ready?"
                restart = True
            if restart:
                self.game.start_new_game()
            msg_out = String()
            msg_out.data = output        
            self.publisher.publish(msg_out)
            self.get_logger().info('publishing')

                
def main(args=None):
    rclpy.init(args=args)

    node = CountriesGameNode()

    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass

    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()