""" Your application should contain three buttons: Choose, Next Action, and Close.

Choose opens the tkinter file chooser so that the user can select a GIF image and process it.  The file chosen should 
be opened in a new window, separate from the original application.Next Action will walk through the image modification
steps performed in the lab last week (listed below), and continue to loop through the list until the user either clicks 
Close or Choose.Close closes all open files and windows and exits the program.
Image Action List:

Original image in an appropriately sized window.
gray scale version
black and white version
blurred 50% version
Edge Detected version"""

from breezypythongui import EasyFrame
from tkinter import *
import tkinter as tk
import tkinter.filedialog
from tkinter.font import Font
from tkinter import PhotoImage
from PIL import Image, ImageTk # place this @ end to avoid errors
import os

window = Tk()

class ButtonDemo(EasyFrame):
    """Illustrates command buttons and user events."""

    def __init__(self):
        """Sets up the window, label, and buttons."""
        EasyFrame.__init__(self, title = "NewPic Program")

        # A single label in the first row.
        self.label = self.addLabel(text = "NewPic Program!",
                                   row = 0, column = 0,
                                   columnspan = 2, sticky = "NSEW")

        # Two command buttons in the second row.
        self.clearBtn = self.addButton(text = "Clear",
                                       row = 1, column = 0,
                                       command = self.clear)
        self.restoreBtn = self.addButton(text = "Restore",
                                         row = 1, column = 1,
                                         command = self.restore,
                                         state = "disabled")
        self.chooseBtn = self.addButton(text = "Choose File",
                                        row = 1, column = 2,
                                        command = self.choose)

    # Methods to handle user events.
    def choose(self):
        """Pops up an open file dialog, and if a file is
        selected, displays its image in a new window"""
        
        f = tkinter.filedialog.askopenfilename() # opens file dialog to allow user to select a .gif file
        top = Toplevel()
        top.title('Second WIndow')
        top.load = Image.open(f)
        render = ImageTk.PhotoImage(top.load)

        img = Label(top, image = render) # here is how the image was placed in a new window
        img.image = render
        img.place(x=0, y=0)

        

        
        print(f)
        
        
        
    
    def clear(self):
        """Resets the label to the empty string and
        the button states."""
        self.label["text"] = ""
        self.clearBtn["state"] = "disabled"
        self.restoreBtn["state"] = "normal"

    def restore(self):
        """Resets the label to 'Hello world!'and sets
        the state of the buttons."""
        self.label["text"] = "Hello world!"
        self.clearBtn["state"] = "normal"
        self.restoreBtn["state"] = "disabled"

def main():
    """Instantiate and pop up the window."""
    ButtonDemo().mainloop()

if __name__ == "__main__":
    main()
