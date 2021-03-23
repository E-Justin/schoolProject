""" Create a program that performs the following actions:

Tells the user what the program does                                            ***
Allows the user to enter a text shortcut, such OMG, LOL, IMHO                   ***
Provides the English definition of the text shortcut back to the screen.        ***
Provide an error message if the entered text is not found.
Can be run until the user enters the character 'x'
Use a dictionary to hold the text shortcuts and definitions.  Implement at least 20 of the text definitions found at https://www.smart-words.org/abbreviations/text.html.

Create your own menu and user interface from the command line.  Also, remember that we are coding in a professional environment, so keep it professional, TYVM.

"""
print("This program allows the user to enter a text shortcut (LOL, OMG, IMHO)") # Tells the user what the program does
print("and provides the English definition of the text shortcut.")

input = str((input("Please enter a text shortcut (OMG, LOL, IMHO) to see its English Definition"))) # stores shortcut in variable





dictionary = {
    "LOL": "Laugh Out Loud",
    "OMG": "Oh My Gosh",
    "RN": "Right Now",
    "2F4U": "Too Fast For You",
    "AAMOF": "As a Matter of Fact",
    "AFAIR": "As far as I know",
    "AFK": "Away from Keyboard",
    "AKA": "Also known as",
    "BTW": "By the way",
    "BTT": "Back to topic",
    "DIY": "Do it yourself",
    "CYS": "Check your spelling",
    "EOD": "End of discussion",
    "IMHO": "In my humble opinion",
    "IMO": "In my opinion",
    "DGMW": "Don't get me wrong",
    "ITT": "In this thread",
    "IOW": "In other words",
    "HF": "Have Fun",
    "FYI": "For your information"


}

print("The definition of %s is:" % input) # prints the shortcut entered by the user
print(dictionary.get(input)) # prints the definition of the shortcut entered by the user.

"""print(len(dictionary)) # gets length
print(dictionary.get("LOL")) # returns definition of key entered in quotes"""
