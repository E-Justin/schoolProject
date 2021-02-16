""" Write a looping program thats prints out the following menu until the user presses x.  Sample output:

**************************************
* Python Program Menu *
**************************************
(1) Rock, Paper, Scissors
(2) Throw The Dice
(3) Hang Man

(x) Exit

Nothing needs to be code based on the selection; just print out what they selected and continue through the loop. 
 Be sure to test your code with all possible values that should be entered. """

userInput = ''

while userInput != 'x':
    print("**************************************")
    print("* Python Program Menu *")
    print("**************************************")
    print("(1) Rock, Paper, Scissors")
    print("(2) Throw The Dice")
    print("(3) Hang Man")
    print("\n")
    print("(x) Exit")
    print("\n")
    userInput = str(input())
