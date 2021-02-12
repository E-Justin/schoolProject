""" Using a loop, print out the letter grade for an entered numeric grade.  This program should repeat until the user tells the program to quit.

Requirements:

The user will enter a numeric grade between 0 and 100.  Numbers outside of this range should generate an error and prompt the user to correct their entry.
The numeric grade will be converted to an appropriate numeric grade (A: 90-100, B: 80-89, C: 70-79, D: 60-69, F: < 60) and displayed to the screen with an appropriate message.
When the user presses the quit selection, display the following message: "Thank you.  The average of all entered grades, excluding errors was: XX"
XX should be the average of all grades entered within range. """

count = 1
addEmUp = 0
userInput = 0
A = 'Great Job! You earned an A'
B = 'Good Job. You earned a B'
C = "C's get degrees: You earned a C"
D = 'No bueno. You earned a D'
F = "You're a failure: You earned an F"

while userInput != 666:
    userInput = int(input("Please enter a numeric grade between 0 and 100 or press 666 to quit"))
    if userInput == 666:
        print("Thank youThe average of all entered grades, excluding errors was: XX")
    if userInput > 100:
        print("Too high. Must be between 0 and 100")
    elif userInput < 0:
        print("Too low. Must be between 0 and 100")
    else:
        addEmUp = addEmUp + userInput
        average = (addEmUp / count)
        count = count + 1
        print("Current average = ", average)


if average <= 100 and average >= 90:
    print(A)
elif average < 90 and average >= 80:
    print(B)
elif average < 80 and average >= 70:
    print(C)
elif average < 70 and average >= 60:
    print(D)
else:
    print(F)
