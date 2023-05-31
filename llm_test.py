import openai
from numpy import random
import os

openai.api_key = "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"

class EnglishLearningGame:
    def __init__(self, game = 1):
        self.chosen_object = ""
        self.available_objects = ["an apple",
                                  "a banana (medium yellow) ",
                                  "an orange",
                                  "a black cat",
                                  "a siberian husky",
                                  "a black computer",
                                  "a red smartphone",
                                  "a yellow mug",
                                  "a glass blue 300ml cup",
                                  "a plastic knife",
                                  #"a 3D printed robot claw",
                                  #"a autonomous mobile robot",
                                  #"a white laptop charger",
                                  #"a notebook (green, tiny)",
                                  #"a box of tissues (pink)",
                                  #"a plate (white, to eat, made of plastic)",
                                  #"a yellow book",
                                  #"an old newspaper",
                                  #"a fork",
                                  "a rubiks cube",
                                  "a small mirror"]
        self.game = game
        self.known_information = ""
        self.number_of_objects = len(self.available_objects)
        self.turns_number = 0
#        self.collected_info = 'an object'
        
    def start_new_game(self, game):
        self.game = game
        self.known_information = "it is on the table"
        self.turns_number = 0
        self.turns_number = 0
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
        all_objs = ""
        for obj in self.available_objects:
            all_objs += obj + ", "
        return all_objs[:-2]
    
    def get_prompt(self, question):
        self.turns_number +=1
        if self.game == 1:
            prompt = "You are a robot that assists in language teaching through a guessing game. An object is drawn and the human asks questions trying to guess the object."\
            "The questions must be answered yes or no. You must receive the question, rephrase the question, and respond with yes or no or protest if the question does not "\
            "allow a yes or no answer, explaining the reason."\
            "Assuming the object to be guessed was a banana (medium yellow):\n\nExample 1\nHuman: "\
            "Is it spherical?\nRobot: You want to know if the object is round. The answer is yes.\n\nExample 2\nHuman: What is the color of the object?\nRobot: This question "\
            "is not valid as it does not allow a yes or no response. You can ask me if the object is red, or if it is transparent, for example.\n\nExample 3\nHuman: "\
            "Is it the banana?\nRobot: Yes, you are incorrect. The object is the yellow banana. Congratulations!\n\nThere are "\
            +str(self.number_of_objects)+" objects: "+self.get_all_obj_string()+". The drawn object was "+self.chosen_object+" and the human needs to guess as soon as possib"\
            "le. This is question number "+str(self.turns_number)+".\n\nHuman: "+question+"\nRobot:?"
        else:
            prompt = ("You are a robot that assists in language teaching through a guessing game. An object is drawn by the human and the robot asks questions trying to guess it." \
                "The human must answer the questions with yes or no. The robot must formulate questions that can be answered with yes or no, and if the human's answer is not clear," \
                " the robot can ask for clarification. Assuming the object to be guessed was a banana, some examples of robot's questions and human's answers are:\n\n" \
                "Example 1\nRobot: Is the object flat?\n" \
                "Example 2\nRobot: Is the object used for writing?\n" \
                "Example 2\nRobot: I think it is the banana\n" \
                "There are "+str(self.number_of_objects)+" objects: "+self.get_all_obj_string()+"."\
                #" The drawn object was "+self.chosen_object+" but don't try to guess until you have enough information."\
                " Your information collected in previous questions: "+self.known_information+"."\
                "Now, make one question to the human or try to guess the object if you have enough information! Robot:")
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


game = EnglishLearningGame(2)

game.start_new_game(game.game)



if game.game == 1:
    while True:
        human_input = input().lower()
        if human_input == "end":
            break
        else:
            output = game.get_robot_message(human_input).lower()
            print(output)
            #if (game.get_game_ended(output)[0] == 'Y'):
            if ("congratulations" in output or "you are correct" in output or "well done" in output):
                print("Congratulations! You are correct! Let's start a new turn. I am ready.")   
                game.start_new_game(game.game)

if game.game == 2:
    while True:
        output = game.get_robot_message().lower()
        print(output)
        human_input = input().lower()
        if human_input == "end":
            break
        else:
            #if (game.get_game_ended(output)[0] == 'Y'):
#            if ("yes" in human_input):
#                game.known_information 
            if ("congratulations" in human_input or "you are correct" in human_input or "well done" in human_input):
                print("Congratulations! You are correct! Let's start a new turn. I am ready.")   
                game.start_new_game(game.game)
            else:
                game.known_information+=', '+ output+" "+human_input
                print(game.known_information)
print("cabo")


"You are a robot that assists in language teaching through a guessing game. An object is drawn and the human asks questions trying to guess the object. The questions must be answered yes or no. You must receive the question, rephrase the question, and respond with yes or no or protest if the question does not allow a yes or no answer, explaining the reason. Assuming the object to be guessed was a bag, some examples of questions and answers are:\n\nExample 1\nHuman: Is it spherical?\nRobot: You want to know if the object is round. The answer is no.\n\nExample 2\nHuman: What is the color of the object?\nRobot: This question is not valid as it does not allow a yes or no response. You can ask me if the object is red, or if it is transparent, for example.\n\nThere were %n objects: %list_of_objects. The drawn object was %object and the human needs to guess with %q questions. This is question number %i.\n\nThe human question is: %question\nWhat is your answer to the human?"


"""
response = openai.ChatCompletion.create(
    model="gpt-3.5-turbo",
    messages=[
            {"role": "system", "content": "You are a chatbot"},
            {"role": "user", "content": "é os guri do gremio futebol clube?"},
        ]
)

result = ''
for choice in response.choices:
    result += choice.message.content
"""

"""
response = openai.Completion.create(
  model="gpt-3.5-turbo",
  prompt=generate_prompt("Coelho"),
  temperature=0.6
)
"""

#openai.api_key = os.getenv('OPENAI_API_KEY')

"""
get_robot_message("You are a robot, make me a question")





print(get_content(completion))
"""