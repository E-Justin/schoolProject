""" Remember the random number - high/low game from way back at the beginning of the semester?  Well, we are playing it again, only with a GUI.
Create an application that generates a random number within a range specified by the user, 



then, using prompter boxes, allows the user to guess 
the hidden number.  When the correct guess is picked, the user wins and the number of tries and the correct number should be displayed on the 
original window.

User interface design is your call.  Make sure that the directions are clear to the youngest possible user, and that the user knows how to play
 and end the game.  This is one of the challenges of GUI design - using graphics, text, and layout to provide an intuitive interface."""

import random
from breezypythongui import EasyFrame

def generateRandomNumber(a,b):
    randomNumber = random.randint(a,b)
    return randomNumber

class ButtonDemo(EasyFrame):
    """Illustrates command buttons and user events."""

    def __init__(self):
        """Sets up the window, label, and buttons."""
        EasyFrame.__init__(self, title = "Range Game")

        # Label and field for the input
        self.addLabel(text = "Range: Low",
                      row = 1, column = 0)
        self.rangeLow = self.addTextField(text = "",
                                            row = 1,
                                            column = 1)

        self.addLabel(text = "Range: High",
                      row = 1, column = 2)
        self.rangeHigh = self.addTextField(text = "",
                                            row = 1,
                                            column = 3)

        # Label and field for the output
        self.addLabel(text = "Output",
                      row = 1, column = 4)
        self.outputField = self.addTextField(text = "",
                                             row = 1,
                                             column = 5,
                                             state = "readonly")

        # A single label in the first row.
        self.label = self.addLabel(text = "Range Game!",
                                   row = 0, column = 0,
                                   columnspan = 2, sticky = "NSEW")

        # Two command buttons in the second row.
        self.randomNumber = self.addButton(text = "Random Number",
                                       row = 2, column = 1,
                                       command = self.randomNumber)
        

    # Methods to handle user events.
    def randomNumber(self):
        """Generates a random number within a range specified by the user."""
        self.randomNumber["state"] = "active"
        a = int(self.rangeLow.get())
        b = int(self.rangeHigh.get())
        result = generateRandomNumber(a,b)
        self.outputField.setText(result)

        
        

    

def main():
    """Instantiate and pop up the window."""
    ButtonDemo().mainloop()

if __name__ == "__main__":
    main()
