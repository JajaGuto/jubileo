from langchain.memory import ChatMessageHistory
from langchain.memory import ConversationBufferMemory
# from langchain.llms import OpenAI
from langchain.chat_models import ChatOpenAI
from langchain.chains import ConversationChain
from numpy import random
import os

os.environ["OPENAI_API_KEY"] = "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"

class Environment:
    def __init__(self):
        self.chosen_object = ""
        self.available_objects = ["an apple",
                                  "a yellow big banana",
                                  "an orange",
                                  "a black cat",
                                  "a siberian husky",
                                  "a black computer",
                                  "a red smartphone",
                                  "a yellow mug",
                                  "a glass blue 300ml cup",
                                  "a plastic knife",
                                  "a 3D printed robot claw",
                                  "a autonomous mobile robot",
                                  "a white laptop charger",
                                  "a green notebook",
                                  "a pink box of tissues",
                                  "a white plate to eat",
                                  "a yellow book",
                                  "an old newspaper",
                                  "a fork",
                                  "a rubiks cube",
                                  "a small mirror"]

    def get_all_obj_string(self):
        all_objs = ""
        for obj in self.available_objects:
            all_objs += obj + ", "
        return all_objs[:-2]

    def choose_object(self):
        while True:
            obj = random.choice(self.available_objects)
            if obj != self.chosen_object:
                self.chosen_object = obj
                break


class PlayerRobot:
    def __init__(self, name="Jubileo"):
        self.name = name
        self.score = 0
        self.human_score = 0
        self.knowledge_base = {}
        self.llm = ChatOpenAI(temperature=0, model_name="gpt-3.5-turbo")
        self.conversation = ConversationChain(
            llm=self.llm,
            #stop='\nHuman',
            verbose=True,
            memory=ConversationBufferMemory(return_messages=True)
        )

    def introduce(self):
        return f"Hello! I am {self.name}. Let's play some games to learn English together!"

    def update_score(self, points):
        self.score += points
        print(f"{self.name}'s score is now {self.score}")

    def play_game(self, game):
        print(f"Now, let's play {game}.")
        # Implement game logic here

    def game_one_feed_memory(self, env):
        self.conversation.memory.chat_memory.add_user_message("Hello!")
        self.conversation.memory.chat_memory.add_ai_message(self.introduce() +
                                                            " In this game there are many objects on the table."
                                                            " I will think in one, and you will try to guess. The obje"
                                                            "cts are " + env.get_all_obj_string() + ". Let's start?")
        self.conversation.memory.chat_memory.add_user_message("Next turn!")
        self.conversation.memory.chat_memory.add_ai_message(
            "I chose an object! - I'm thinking in a blue 300ml cup made "
            "of plastic, but I will keep it a secret.")
        self.conversation.memory.chat_memory.add_user_message("Is the object black?")
        self.conversation.memory.chat_memory.add_ai_message("No, it is not black!")
        self.conversation.memory.chat_memory.add_user_message("Is it a food?")
        self.conversation.memory.chat_memory.add_ai_message("No, it not a food!")
        self.conversation.memory.chat_memory.add_user_message("Is it used in the kitchen?")
        self.conversation.memory.chat_memory.add_ai_message("Yes, is normal to use in the kitchen.")
        self.conversation.memory.chat_memory.add_user_message("Is it made of plastic?")
        self.conversation.memory.chat_memory.add_ai_message("Yes!")
        self.conversation.memory.chat_memory.add_user_message("It is the blue cup?")
        self.conversation.memory.chat_memory.add_ai_message("Turn finished! Yes it is the blue cup!")
        self.conversation.memory.chat_memory.add_user_message("Okay! One more time!")
        self.conversation.memory.chat_memory.add_ai_message("I chose an object! - I'm thinking in a yellow big banana"
                                                            ",but I will keep it a secret.")
        self.conversation.memory.chat_memory.add_user_message("Is the object orange?")
        self.conversation.memory.chat_memory.add_ai_message("No, it is not orange!")
        self.conversation.memory.chat_memory.add_user_message("Is it a food?")
        self.conversation.memory.chat_memory.add_ai_message("Yes, it is!")
        self.conversation.memory.chat_memory.add_user_message("Is it a natural unprocessed food?")
        self.conversation.memory.chat_memory.add_ai_message("Yes it is.")
        self.conversation.memory.chat_memory.add_user_message("Is it an apple?")
        self.conversation.memory.chat_memory.add_ai_message("Turn finished! No, it was the yellow big banana.")

    def game_two_feed_memory(self, env):
        self.conversation.memory.chat_memory.add_user_message("Hello! In this game there are many objects on the table."
                                                            " I will think in one, and you will try to guess. The obje"
                                                            "cts are " + env.get_all_obj_string() + ".")
        self.conversation.memory.chat_memory.add_ai_message(self.introduce() +". Let's start?")
        self.conversation.memory.chat_memory.add_user_message("Yes")
        self.conversation.memory.chat_memory.add_ai_message("Is the object black")
        self.conversation.memory.chat_memory.add_user_message("No, it is not black!")
        self.conversation.memory.chat_memory.add_ai_message("Is it a food")
        self.conversation.memory.chat_memory.add_user_message("No, it not a food!")
        self.conversation.memory.chat_memory.add_ai_message("Is it used in the kitchen")
        self.conversation.memory.chat_memory.add_user_message("Yes, is normal to use in the kitchen.")
        self.conversation.memory.chat_memory.add_ai_message("Is it made of plastic")
        self.conversation.memory.chat_memory.add_user_message("Yes!")
        self.conversation.memory.chat_memory.add_ai_message("It is the blue cup")
        self.conversation.memory.chat_memory.add_user_message("Turn finished! Yes it is the blue cup! You are good")
        self.conversation.memory.chat_memory.add_ai_message("Okay! One more time")
        self.conversation.memory.chat_memory.add_user_message("Okay! I chose the object")
        self.conversation.memory.chat_memory.add_ai_message("Is the object orange?")
        self.conversation.memory.chat_memory.add_user_message("No, it is not orange!")
        self.conversation.memory.chat_memory.add_ai_message("Is it a food?")
        self.conversation.memory.chat_memory.add_user_message("Yes, it is!")
        self.conversation.memory.chat_memory.add_ai_message("Is it a natural unprocessed food?")
        self.conversation.memory.chat_memory.add_user_message("Yes it is.")
        self.conversation.memory.chat_memory.add_ai_message("Is it an apple?")
        self.conversation.memory.chat_memory.add_user_message("Turn finished! No, it was the yellow big banana.")
        self.conversation.memory.chat_memory.add_ai_message("Okay, do you want to play again?")
        

env = Environment()

robot = PlayerRobot()

# game 1 ta funcionando bem certinho
# robot.game_one_feed_memory(env)

robot.game_two_feed_memory(env)

human_input = input()
# aqui comecar respondendo algo cono - Yes, I want to play
output = robot.conversation.predict(input=human_input)
print(output)
while True:
    human_input = input()
    if human_input == "end":
        break
    else:
        output = robot.conversation.predict(input=human_input)
        print("output")
        print(output)
    print(robot.conversation.memory.load_memory_variables({}))

print("cabo")
