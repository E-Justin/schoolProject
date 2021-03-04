"""Create program that takes one, iong word from the user and creates two new words.  Use the following 
specifications to check input and create two new words:

Word entered by the user must be at least 10 characters long.
Output words are created by:
Word #1: Using all even letters from the entered word (0, 2, 4, 6, etc.)
Word #2: Combine the last 4 characters of the entered word and the second through fifth characters of the entered word into a single word
All letters of output words should be in upper case. """

evenIndex = 0 # used to index the even numbered characters from userInput
index = 1 # used to get characters 2-5 from userInput
lastFour = -4 # used to get the last four characters of userInput

word1 = str() # holds the first word
word2 = str() # holds the second word
userInput = str # holds user input


userInput = str(input("Please enter a word with at least 10 letters"))
inputLength = len(userInput) 

while inputLength < 10: # prints error message if userInput is not long enough
    print("*********************** Error ***********************")
    print("The word you entered needs to have at least 10 letters")
    userInput = str(input("Please enter a word with at least 10 letters")) # prompts user to re-enter a word of appropriate size
    inputLength = len(userInput)


while evenIndex < inputLength: # gets the evenly indexed characters from userInput and assigns them to word1
    word1 += userInput[evenIndex]
    evenIndex = evenIndex + 2

while lastFour != 0: # gets the last four characters of userInput and assigns it to word2
    word2 += userInput[lastFour]
    lastFour = lastFour + 1

while index < 6: # gets characters 2-5 from userInput and concatenates it to word2
    word2 += userInput[index]
    index = index + 1

    
    

print("Word1 is : %s" % word1.upper())
print("Word2 is : %s" % word2.upper())
print("Thanks for playing!")

    


