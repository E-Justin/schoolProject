"""Create program that takes one, iong word from the user and creates two new words.  Use the following 
specifications to check input and create two new words:

Word entered by the user must be at least 10 characters long.
Output words are created by:
Word #1: Using all even letters from the entered word (0, 2, 4, 6, etc.)
Word #2: Combine the last 4 characters of the entered word and the second through fifth characters of the entered word into a single word
All letters of output words should be in upper case. """

evenIndex = 0
index = 0
word1 = str
userInput = str
evenChar = str

userInput = str(input("Please enter a word with at least 10 letters"))
inputLength = len(userInput)

while inputLength < 10: # prints error message if userInput is not long enough
    print("*********************** Error ***********************")
    print("The word you entered needs to have at least 10 letters")
    userInput = str(input("Please enter a word with at least 10 letters")) # prompts user to re-enter a word of appropriate size
    inputLength = len(userInput)


while evenIndex < inputLength: # gets the even letters from
    evenChar = userInput[evenIndex]
    word1 = str(word1) + evenChar
    evenIndex = evenIndex + 2

print("Word 1 = : %s " % (word1))
    


