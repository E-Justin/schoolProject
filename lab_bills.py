user1Input = [0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0.]
user2Input = [0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0.]

user1Total = float()
user2Total = float()

index = 0
count = 0

index2 = 0
count2 = 0


selection = str(input("Would you like to enter bills paid by user1? y/n")) 

while selection != 'n': # while selection is not n
    user1Input[index] = str(input("Enter a bill amount that user1 paid this month")) # stores user input in an array, starting at 0
    selection = str(input("Would you like to enter more bills paid by user1? y/n")) # continue bills for user1 or no
    index = index +1 #increases index to move to the next position in the array.

print("User1 paid the following amounts:")
while count < index: # displays each amount entered for user1
    print(user1Input[count])
    user1Total = user1Total + float(user1Input[count]) # adds up each element of the array to get the total amount bills paid for user1
    count = count + 1 # increases count to move to the next position in the array

print("User1Total =$", round(user1Total)) # displays user1's total



selection2 = str(input("Would you like to enter bills paid by user2? y/n")) # selection2 = y/n

while selection2 != 'n':
    user2Input[index2] = str(input("Enter a bill amount that user2 paid this month")) #stores bill amounts for user2 in array
    selection2 = str(input("Would you like to enter more bills paid by user2? y/n")) # continue, or no?
    index2 = index2 +1 

print("User2 paid the following amounts:")
while count2 < index2: #displays each amount entered for user2
    print(user2Input[count2]) # prints each element in array to display each amount paid.
    user2Total = user2Total + float(user2Input[count2]) # sums up the elements in the array to find total bills paid for user2
    count2 = count2 + 1

print("***** User1Total ***** =$", round(user1Total))
print("***** User2Total ***** =$", round(user2Total))

if user1Total > user2Total: # if user1 paid more in bills
    difference = user1Total - user2Total
    quotient = difference / 2
    print("User2 owes user1: $", quotient)

if user2Total > user1Total: # if user2 paid more in bills
    difference = user2Total - user1Total
    quotient = difference / 2
    print("User1 owes user2: $", quotient)

if user1Total == user2Total: # if users paid the same amount
    print("You each paid the same amount")
