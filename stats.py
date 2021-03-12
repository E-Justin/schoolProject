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



def findMedian(x):
    sortedList = sorted(x)      ## does not work yet.. index error
    length = len(x)
    if length % 2 == 1: # if length is odd
        halfL = round(length / 2)
        medain = sortedList[halfL] # middle number in sorted list is median
    elif length % 2 == 0: # if length is even
        halfL = round(length / 2)
        median = (sortedList[halfL -1 ] + sortedList[halfL]) / 2 # averages the middle two numbers to get median
    return median

sorted(aList) # sorts the list in order from least to greatest

#mean
mean(aList)
print(aList)
print(sorted(aList))
print("The mean of the list is %f" % mean(aList)) # prints the mean of the list


# median


    

print("The median of the list is %f" % findMedian(aList))
