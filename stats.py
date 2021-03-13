quotient = 0
aList = [85, 90, 100, 95, 70, 65, 56, 91, 97, 95]

def mean(x):
    """returns the mean of a list """
    index = 0
    total = 0
    while index < len(x):
        total += aList[index] #finds sum of the list: indexes through one at a time
        index = index + 1
    quotient = total / len(x) # divides total by how many items are in the list
    return quotient # returns the mean



def findMedian(x):
    """ this function finds the median of a list """
    sortedList = sorted(x)     # sorts the list in order from least to greatest
    length = len(x) # gets length of the list
    if length % 2 == 1: # if length is odd
        halfL = round(length / 2) # finds the half way mark, used for indexing the middle number(s)
        medain = sortedList[halfL] # middle number in sorted list is median
    elif length % 2 == 0: # if length is even
        halfL = round(length / 2) # finds the half way mark, used for indexing the middle number(s)
        median = (sortedList[halfL -1 ] + sortedList[halfL]) / 2 # averages the middle two numbers to get median
    return median

# to find mode






mean(aList)
print("Unsorted: ", aList)
print("Sorted:   ",sorted(aList))
print("The mean of the list is %f" % mean(aList)) # prints the mean of the list


# median


    

print("The median of the list is %f" % findMedian(aList))
