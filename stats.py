quotient = 0
aList = (85, 90, 100, 95, 70, 65, 56, 91, 97, 95)

def mean(x):
    """returns the mean of a list """
    index = 0
    total = 0
    quotient = 0

    while index < len(x):
        total += aList[index]
        quotient = total / len(x)
        index = index + 1

    return quotient

sorted(aList) # sorts the list in order from least to greatest

#mean
mean(aList)
print("The mean of the list is %f" % mean(aList)) # prints the mean of the list


# median
index = 0
nIndex = -1

while index <= (len(aList) / 2):
    leastToGreatest = sorted(aList) # sorts list in order from least to greatest and assigns it to a variable
    
