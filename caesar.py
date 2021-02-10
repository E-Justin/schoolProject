This program should:
* accept a string from the user
* shift the characters in the string by +5
* output the encrypted string to the screen """

userInput = str(input("Please enter a sentence to be encrypted"))
print("The original string you typed in is :\n",userInput)
encryptedString = " "


index = 0
while userInput[index] != "":
    encryptedChar = ord(userInput[index]) #converts each character to its ASCII equivent 
    encryptedChar = encryptedChar + 5 # encrypts each character by adding 5 to its ASCII value
    encryptedString += str(encryptedChar) #concatenates the encrypted string one character at a time to the encryptedString variable
    index += 1 #iterates through the loop
    

print(encryptedString)
