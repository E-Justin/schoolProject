""" Write a nested loop that prints out to the screen the number of rows entered by the user and the 
number of stars on each row based on row number. Sample output:

Please enter ow many rows that you want: 7
*
**
***
****
*****
******
******* """
index = 1
numberOfRows = int(input("Please enter how many rows that you want: "))
while index <= numberOfRows:
    print("*" * index) 
    index = index +1
