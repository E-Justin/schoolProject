""" Create a simple menu program that:

Collects a list of numbers from the user (between 2 and 10 numbers in the list) - one list, collected before the menu is displayed. ***
Presents menu of options to the user that can be applied to their entered list of numbers,  The menu should allow the user to:   
Convert their list of numbers to a string (mapping)
Multiply the individual numbers in the list by a number obtained from the user and replace the numbers in the list with the new values (function).
Reverse each number in the list (filtering)
Hint: if 107 was entered by the user, the number will become 701 after executing your "reverse" function, stored as an int.
Provide the total of the entered list (reducing).
Print out their list in a 3 column format (function).
The menu of options should be coded in a loop with the user able to exit by entering an appropriate value.
The code should be implemented using a function-orientation with either the def keyword or lambdas, if desired and possible (Remember the lambda 
restrictions to avoid self-stress.

jumpTable is an excellent menu processor, but requires that you provide a valid integer option.  Please verify user input and convert if needed 
to use jumpTable successfully.  Not required for this program, but an available option.
"""
def threeColumns(x):
   index = 0
   while index < len(x):
      if index % 3 == 0 :
         print("%s\t " % x[index], end = "")
         index += 1
      if index == 1 or index == 4 or index == 7:
         print("%s\t" % x[index], end = "")
         index += 1
      if index == 2 or index == 5 or index == 8:
         print("%s" % x[index])
         index += 1
   return 0

def sumList(x):
    """sums a list of numbers """
    addEmUp = int
    x = list(map(int, x))
    addEmUp = sum(x)
    return addEmUp


def convertToString(x): 
    """converts the list to a string ** works"""
    newString = "".join(map(str,x))
    return newString

def multiplyList(x): 
    """ multiply each item by a number provided by the user and display the product for each"""
    multiplyBy = int(input("What intiger do you want to multiply each item in your list by?"))
    length = len(x) # finds length of the list
    index = 0
    newList = [0,] * length # makes newlist the same length as old one
    while index < length:
        number = int(userList[index]) # gets one number at a time and converts it to an int so next step is possible
        newList[index] = number * multiplyBy # multiplies each number from old list and inserts product to new list in order
        index += 1
    return newList

def reverseList(x): 
    """reverses a list"""
    newList = userList[: : -1]
    return newList



userList = [0, 0, 0, 0, 0, 0, 0, 0, 0, 0]
userInput = 0
count = 0 # to count length of list


userInput = input("Please enter the first number in your list")
userList[0] = userInput
count = count + 1
userInput = input("Please enter the next number in your list")
userList[1] = userInput
count = count + 1

index = 2 # used to add the number entered to the list in the correct position (indexes 0 - 1 were done above)
while userInput != 'x' and count != 10: 
   userInput = input("Please enter the next number in your list, or press x to move on")
   userList[index] = userInput
   count = count + 1
   index = index + 1

print(userList)

if count != 10: # if all possible positions in the list have not been filled (max of 10 items)
   while count < 11:
      del userList[-1] # deletes each non used item in the list so there are no '0's
      count = count + 1


print(userList)




print("**************************************************************************")
print("Press 1 to convert your list of numbers into a string.")
print("Press 2 to multiply each number in your list by a number of your choosing.")
print("Press 3 to reverse each number in your list.")
print("Press 4 to get the total of all of the numbers in your list.")
print("Press 5 to print out your list in a 3 column format")
print("press x to quit")
selection = (input())

while selection != 'x':
    if selection == '1':
        print(convertToString(userList))
    if selection == '2':
        print(multiplyList(userList))
    if selection == '3':
        print(reverseList(userList))
    if selection == '4':
        print(sumList(userList))
    if selection == '5':
        threeColumns(userList)
    print("**************************************************************************")
    print("Press 1 to convert your list of numbers into a string.")
    print("Press 2 to multiply each number in your list by a number of your choosing.")
    print("Press 3 to reverse each number in your list.")
    print("Press 4 to get the total of all of the numbers in your list.")
    print("Press 5 to print out your list in a 3 column format")
    print("press x to quit")
    selection = (input())


print("Original list: %s" % userList)
