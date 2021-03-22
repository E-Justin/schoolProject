""" Using the write functions that we learned about in Chapter 4, write a program 
that creates a text file called random.txt containing 1000 random numbers between 1 and 100.

Use a tuple to collect the random numbers before writing them to the file.
When writing to the file - one number per line """
count = 1
index = 0
randomInt = ()
import random


f = open("random.txt", 'a+') # opens/ creates a new file for appending and reading
while count < 1001:
    randomInt += (random.randint(1,100) ,)
    count += 1
    


while len(randomInt) > index:
    f.write("%s\n" % str(randomInt[index]))
    index += 1
