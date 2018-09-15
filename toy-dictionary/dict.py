import json
from difflib import get_close_matches
data = json.load(open("data.json"))

def translate(word):
    word = word.lower()
    if word in data:
        return data[word]
    else:
        similar = get_close_matches(word, data.keys(), cutoff=.8)[0]
        if similar == []:
            return "The word does not exist. Please double check"
        else:
            answer = input("The word does not exist. Did you mean " + similar + " instead?\n y or n: ")
            if answer == "y":
                return str(data[similar])
            elif answer == "n":
                return "Please double check the word."
            else: 
                return "I do not understand your answer. Sorry. "

word = input("Enter word: ")

output = translate(word)

if type(output) == list:
    for item in output:
        print(" * " + item)
else:
    print(output)