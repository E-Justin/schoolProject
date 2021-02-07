char1 = str(input("Please enter a single character and press enter")) #has user enter a character
char2 = str(input("Please enter a different single character and press enter")) # has user enter another character
print(char1, char2) # stores characters into variables
distance = ord(char1) - ord(char2) # calculates the distance between the two characters entered
print("The distance between the two characters entered is ", abs(distance)) # prints out the absolute value of the  distance between the characters entered
