user1Input = [0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0.] # array to hold user1's amount for each bill
user2Input = [0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0.] # array to hold user2's amount for each bill

user1Total = float() # variable to hold total amount of bills paid by user1
user2Total = float() # variable to hold total amount of bills paid by user2

selection = str # holds a 'y' or 'n' depending on whether the user wants to continue or not
selection2 = str # holds a 'y' or 'n' depending on whether the user wants to continue or not

index = 0 # used to iterate through loops for user1
count = 0 # used to iterate through loops for user1

index2 = 0 # used to iterate through loops for user2
count2 = 0 # used to iterate through loops for user2

user1Name = str(input("What is user1's name?")) # stores user1's name
user2Name = str(input("What is user2's name?")) # stores user2's name

user1Bills = ['', '', '', '', '', '', '', '', '', '', ''] # array to hold the names of the bills paid by user1
user2Bills = ['', '', '', '', '', '', '', '', '', '', ''] # array to hold the names of the bills paid by user2


selection = str(input("Would you like to enter bills paid by " + user1Name + "? y/n")) 
while selection != 'y' and selection != 'n': # sends an error message and has user try again if selection is not a 'y' or 'n'
    print("**Error** you must type a 'y' for yes or an 'n' for no")
    selection = str(input("Would you like to enter bills paid by " + user1Name + "? y/n")) 

while selection != 'n': # while selection is not n
    user1Bills[index] = str(input("What is the name of the bill that you are about to enter?")) # stores each bill name in array to display later
    user1Input[index] = float(input("How much did " + user1Name + " pay for " + user1Bills[index] + " this month?")) # stores user input in an array, starting at 0
    selection = str(input("Would you like to enter more bills paid by " + user1Name + "? y/n")) # continue bills for user1 or no
    index = index +1 #increases index to move to the next position in the array.
    while selection != 'y' and selection != 'n': # sends an error message and has user try again if selection is not a 'y' or 'n'
        print("**Error** you must type a 'y' for yes or an 'n' for no")
        selection = str(input("Would you like to enter more bills paid by " + user1Name + "? y/n"))
        


print(user1Name + " paid the following bills with these amounts:")
while count < index: # displays each amount entered for user1
    print("%s : $ %s" % (user1Bills[count], user1Input[count])) # prints the bill name and the amount
    user1Total = user1Total + float(user1Input[count]) # adds up each element of the array to get the total amount bills paid for user1
    count = count + 1 # increases count to move to the next position in the array

print(user1Name + "'s Total =$", round(user1Total,2)) # displays user1's total



selection2 = str(input("Would you like to enter bills paid by " + user2Name + "? y/n")) # selection2 = y/n
while selection2 != 'y' and selection2 != 'n': # sends an error message and has user try again if selection is not a 'y' or 'n'
    print("**Error** you must type a 'y' for yes or an 'n' for no")
    selection2 = str(input("Would you like to enter bills paid by " + user2Name + "? y/n")) 

while selection2 != 'n':
    user2Bills[index2] = str(input("What is the name of the bill that you are about to enter?")) # stores each bill name in array to display later
    user2Input[index2] = float(input("How much did " + user2Name + " pay for " + user2Bills[index2] + " this month?")) # stores user input in an array, starting at 0
    selection2 = str(input("Would you like to enter more bills paid by " + user2Name + "? y/n")) # continue, or no?
    index2 = index2 +1
    while selection2 != 'y' and selection2 != 'n': # sends an error message and has user try again if selection is not a 'y' or 'n'
        print("**Error** you must type a 'y' for yes or an 'n' for no")
        selection2 = str(input("Would you like to enter bills paid by " + user2Name + "? y/n"))
        
 

print(user2Name + " paid the following amounts:")
while count2 < index2: #displays each amount entered for user2
    print("%s : $ %s " % (user2Bills[count2], user2Input[count2])) # prints the bill name and the amount
    user2Total = user2Total + float(user2Input[count2]) # sums up the elements in the array to find total bills paid for user2
    count2 = count2 + 1

print("***** " + user1Name + "'s Total this month ***** =$", round(user1Total,2))
print("***** " + user2Name + "'s Total this month ***** =$", round(user2Total,2))

if user1Total > user2Total: # if user1 paid more in bills
    difference = user1Total - user2Total
    quotient = difference / 2
    print(user2Name + " owes " + user1Name + ": $", round(quotient, 2))

if user2Total > user1Total: # if user2 paid more in bills
    difference = user2Total - user1Total
    quotient = difference / 2
    print(user1Name + " owes " + user2Name + ": $", round(quotient, 2))

if user1Total == user2Total: # if users paid the same amount
    print("You each paid the same amount")



