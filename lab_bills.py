user1Input = [0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0.]
user2Input = [0., 0., 0., 0., 0., 0., 0., 0., 0., 0., 0.]

user1Total = float()
user2Total = float()

index = 0
count = 0


selection = str(input("Would you like to enter bills paid by user1? y/n"))

while selection != 'n':
    user1Input[index] = str(input("Enter a bill amount that user1 paid this month"))
    selection = str(input("Would you like to enter more bills paid by user1? y/n"))
    index = index +1 

print("User1 paid the following amounts:")
while count < index:
    print(user1Input[count])
    user1Total = user1Total + float(user1Input[count])
    count = count + 1

print("User1Total =", round(user1Total))
