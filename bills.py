
# program should add up the bills for person 1 and 2 separately
# find the difference between the two people's bills for the month
# divide the difference by two
# add the difference, divided by two to the person who paid the least amount in bills
# display the amount owed to which person
count = 0
index = 0
person1 = 0.0
person2 = 0.0
temp1 = 0.0
temp2 = 0.0
bill = 0


while bill != 123:
    if bill == 123:
        break
    elif bill != 123:
            bill = float(input("Enter a bill amount that person1 paid, or press 123 to move on to Kristen's stuff"))
            person1 += bill
            print("Person1's current bills total for the month:", round(person1,2))
    

print("Person1's total for bills this month is: $", round(person1,2))
    

while bill != 456:
    if bill == 456:
        break
    elif bill != 456:
        bill = float(input("Enter a bill amount that person2 paid, or press 456 to move to find out who owes who what "))
        person2 += bill
        print("Person2's current bills total for the month:", round(person2, 2))
    

print("Person2's total for bills this month is: $", round(person2, 2))

    
    


