highNum = int(input("Please enter an integer: This program will check all numbers from 0 to _____"))

index = 1
threeAndFive = "FizzBuzz" # if divisible by three and five
three = "Fizz" # if divisible by three
five = "Buzz" # if divisible by five


while index <= highNum:
    if index % 3 == 0 and index % 5 ==0: # if divisible by both 3 and 5
        print(index, ' : ', threeAndFive)
        index = index + 1
        
    elif index % 3 == 0 and index % 5 !=0: # if divisible by 3 only
        print(index, ' : ',three)
        index = index + 1
        
    elif index % 5 == 0 and index % 3 != 0: # if divisible by 5 only
        print(index, ' : ',five)
        index = index + 1
        
    else:
        print(index) # prints the index integer only if not divisible by 3 and/ or 5
        index = index + 1
