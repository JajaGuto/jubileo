import openai
from numpy import random
import os

OPENAI_API_KEY = os.getenv("OPENAI_API_KEY")
if not OPENAI_API_KEY:
    raise RuntimeError("OPENAI_API_KEY environment variable is not set.")

openai.api_key = OPENAI_API_KEY


class EnglishLearningGame:
    """Legacy standalone prototype for the Jubileo English-learning game.

    The original research prototype is kept here for reference. Credentials are
    intentionally loaded from the environment instead of being stored in source.
    """

    def __init__(self, game=1):
        self.chosen_object = ""
        self.available_objects = [
            "an apple",
            "a banana (medium yellow)",
            "an orange",
            "a black cat",
            "a siberian husky",
            "a black computer",
            "a red smartphone",
            "a yellow mug",
            "a glass blue 300ml cup",
            "a plastic knife",
            "a rubiks cube",
            "a small mirror",
        ]
        self.game = game
        self.known_information = ""
        self.number_of_objects = len(self.available_objects)
        self.turns_number = 0

    def start_new_game(self, game):
        self.game = game
        self.known_information = "it is on the table"
        self.turns_number = 0
        self.choose_object()

    def choose_object(self):
        while True:
            obj = random.choice(self.available_objects)
            if obj != self.chosen_object:
                self.chosen_object = obj
                print(obj)
                break

    def get_all_obj_string(self):
        return ", ".join(self.available_objects)

    def get_prompt(self, question):
        self.turns_number += 1
        if self.game == 1:
            return (
                "You are a robot that assists in language teaching through a guessing game. "
                "Answer questions about the selected object with yes or no when possible. "
                f"There are {self.number_of_objects} objects: {self.get_all_obj_string()}. "
                f"The selected object is {self.chosen_object}. Human: {question}\nRobot:"
            )
        return (
            "You are a robot that assists in language teaching through a guessing game. "
            "Ask one yes/no question at a time to identify the object. "
            f"Available objects: {self.get_all_obj_string()}. "
            f"Known information: {self.known_information}.\nRobot:"
        )

    @staticmethod
    def get_content(data):
        return data["choices"][0]["message"]["content"]

    def get_robot_message(self, question=""):
        completion = openai.ChatCompletion.create(
            model="gpt-3.5-turbo",
            messages=[{"role": "user", "content": self.get_prompt(question)}],
            temperature=0,
        )
        return self.get_content(completion)


if __name__ == "__main__":
    game = EnglishLearningGame(2)
    game.start_new_game(game.game)

    while True:
        output = game.get_robot_message().lower()
        print(output)
        human_input = input().lower()
        if human_input == "end":
            break
        game.known_information += ", " + output + " " + human_input

    print("cabo")
