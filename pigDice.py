"""Using the die.py and dicedemo.py files as a starting point, create a pigdice.py game that plays the game of Pig

Rules of Pig: (https://www.dicegamedepot.com/dice-n-games-blog/pig-dice-game-rules/). 

Pig involves two players, you and the computer.  You will be rolling the die and displaying your results on the screen.  
The Computer will play in the background and just show their total score in a Label field.

Your screen will look like dicedemo.py, but you will need a few modifications to reflect the rules of Pig:

Add a Label field to display the Computer Total
Add a Label field to show your Total
Only one die needs to be displayed.
Button options are: Roll (your turn), Pass (let the computer process its rolls), and Begin (start the game - other buttons are disabled until you click this one)
For your roll, click the Roll button until you decide to stop.  Remember that if you roll the number 1, you lose all points for that turn.  Click Pass for the 
computer to play.  To simulate the computer's play, you can generate a random number of "times" that the computer will roll, then roll their die until they use up 
all of their rolls or roll a 1.

Keep up with totals for both players and show those totals on the screen.  First one to 100 wins!

Once you have the game working, you could add a message box at the very beginning to explain the game to the user (or create a keyboard listener for the letter 
H to display Help in a message box, if you wanted to get complicated).

The dice images are attached to this assignment and MUST be a subdirectory of your folder where your code resides.  Download, unzip and put them in a folder 
under your source directory called DICE (all caps)."""

from breezypythongui import EasyFrame
from tkinter import PhotoImage
from die import Die
import tkinter as tk
root = tk.Tk()

class PigDice(EasyFrame):
    
    
    def __init__(self):
        """Creates the dice, and sets up the Images and labels
        for the two dice to be displayed, the state label,
        and the two command buttons."""
        EasyFrame.__init__(self, title = "Pig Dice")
        self.setSize(220, 200)
        self.die1 = Die()
        
        self.dieLabel1 = self.addLabel("", row = 0,
                                       column = 0,
                                       sticky = "NSEW")
        self.dieLabel2 = self.addLabel("", row = 0,
                                       column = 1,
                                       sticky = "NSEW",
                                       columnspan = 2)
        self.stateLabel = self.addLabel("", row = 1, column = 0,
                                        sticky = "NSEW",
                                        columnspan = 2)
        self.addButton(row = 2, column = 0,
                       text = "Roll",
                       command = self.nextRoll)
        self.addButton(row = 2, column = 1,
                       text = "New game",
                       command = self.newGame)
        self.refreshImages()
    
    def nextRoll(self):
        """Rolls the dice and updates the view with
        the results."""
        count = 0
        total = [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0] # to hold the value of each roll
        thisRoll = 0
        self.die1.roll() # rolls the dice
        while thisRoll != 1: # if a 1 is rolled, turn is over

            
            thisRoll = self.die1.getValue() # get value of the die
            self.refreshImages() # refreshes image, showing the image of a die with the correct value (randomly selected)
            

            total[count] = thisRoll # places the current die value in the appropriate index based off of how many rolls the player has made
            totalSum = sum(total)
                
            self.stateLabel["text"] = "Total Points = " + str(totalSum)  # displays user's current total     
            
            count +=1
            
            
        if thisRoll == 1: # if player rolls a 1, turn is over and everything resets.
            self.stateLabel["text"] = "You rolled a 1: Your turn is over"
            self.refreshImages()
            count = 0
            total = [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0]
            thisRoll = 0
        

    def newGame(self):
        """Create a new craps game and updates the view."""
        self.die1 = Die()
        
        self.stateLabel["text"] = ""
        self.refreshImages()
        
    def refreshImages(self):
        """Updates the images in the window."""
        fileName1 = "DICE/" + str(self.die1) + ".gif"
        
        self.image1 = PhotoImage(file = fileName1)
        self.dieLabel1["image"] = self.image1
        
        

def main():
    
    PigDice().mainloop()

if __name__ == "__main__":
    main()
