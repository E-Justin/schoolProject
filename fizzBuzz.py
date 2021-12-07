# fizzBuzz
# checks all numbers from 1 - the number entered by the user
# fizz = number is divisible by 3
# buzz = number is divisible by 5
# fizzBuzz = number is divisible by both 3 and 5
highNum = int(input("Please enter an integer: This program will check all numbers from 0 to _____"))



def fizzBuzz(highNum):
    index = 1
    threeAndFive = "FizzBuzz" # if number is divisible by three and five
    three = "Fizz " # if number is divisible by 3, but not 5
    five = "Buzz " # if number is divisible by 5, but not 3
    while index <= highNum:
        
        if index % 3 == 0 and index % 5 == 0:
            print (index, " : " , threeAndFive)
            index += 1
        elif index % 3 == 0:
            print(index, " : " , three)
            index += 1
        elif index % 5 == 0:
            print (index, " : " , five)
            index += 1
        else:
            print (index)
            index += 1
   
  
fizzBuzz(highNum);        
    
