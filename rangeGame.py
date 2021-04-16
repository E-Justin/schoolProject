""" Remember the random number - high/low game from way back at the beginning of the semester?  Well, we are playing it again, only with a GUI.
Create an application that generates a random number within a range specified by the user, 

then, using prompter boxes, allows the user to guess 
the hidden number.  When the correct guess is picked, the user wins and the number of tries and the correct number should be displayed on the 
original window.

User interface design is your call.  Make sure that the directions are clear to the youngest possible user, and that the user knows how to play
 and end the game.  This is one of the challenges of GUI design - using graphics, text, and layout to provide an intuitive interface."""

import random
from breezypythongui import EasyFrame


global tries
tries = 0



def generateRandomNumber(a,b):
    randomNumber = random.randint(a,b)
    return randomNumber

class rangeGame(EasyFrame):
    """Illustrates command buttons and user events."""

    

    def __init__(self):
        """Sets up the window, label, and buttons."""
        EasyFrame.__init__(self, title = "Range Game")

        # to keep track of number of tries
        self.count = 0

        # Label and field for the input
        self.addLabel(text = "Range: Low\n (lowest number possible)",
                      row = 1, column = 0)
        self.rangeLow = self.addTextField(text = "",
                                            row = 1,
                                            column = 1)

        self.addLabel(text = "Range: High\n (Highest number possible)",
                      row = 1, column = 2)
        self.rangeHigh = self.addTextField(text = "",
                                            row = 1,
                                            column = 3)

        # Label and field for the output
        self.addLabel(text = "Random Number = ",
                      row = 1, column = 4)
        self.outputField = self.addTextField(text = "",
                                             row = 1,
                                             column = 5,
                                             state = "readonly")

        
        # Label to display wins
        #self.label = self.addLabel(text = " Tries: " + str(self.count), row = 0, column = 0, columnspan = 1)
        # label to display losses
        #self.label = self.addLabel(text = " Losses: %d" % loss, row = 0, column = 1, columnspan = 1)

        # button to generate a random number.
        self.randomNumber = self.addButton(text = "Generate random Number",
                                       row = 2, column = 1,
                                       command = self.randomNumber)
        # button to allow user to guess the outcome
        self.guess = self.addButton(text = "Guess the outcome?",
                                       row = 2, column = 3,
                                       command = self.guess)
                                       
        
    # prompter box
    def guess(self):
        text = self.prompterBox(title = "Input Dialog",promptString = "What is your guess?:")
        self.label = self.addLabel(text = "Your guess = " + text, row = 0, column = 1)
        
        global guessedNumber
        guessedNumber = text
        
    
    # Methods to handle user events.
    def randomNumber(self):
        global result
        """Generates a random number within a range specified by the user."""
        self.randomNumber["state"] = "active"
        a = int(self.rangeLow.get())
        b = int(self.rangeHigh.get())
        result = generateRandomNumber(a,b)
        self.outputField.setText(result)
        self.count += 1
        self.label["text"] = "Tries: " + str(self.count)
        if int(guessedNumber) == result:
            self.label["text"] = "You are a Winner!!! And it only took %d tries" % self.count
            self.count = 0

        

def main():
    """Instantiate and pop up the window."""
    rangeGame().mainloop()

if __name__ == "__main__":
    main()

