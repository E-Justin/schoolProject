"""This program should:
* accept a string from the user
* shift the characters in the string by +5
* output the encrypted string to the screen """

userInput = str(input("Please enter a sentence to be encrypted"))
print("The original string you typed in is :\n",userInput)


encryptedString = ' '
index = 0
while userInput[index] != "":
    encryptedChar = ord(userInput[index] + 5) #encrypts the string, one character at a time by adding 5 to the ASCII value
    encryptedString[index] = encryptedChar
    index += 1
