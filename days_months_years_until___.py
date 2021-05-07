'''This program will ask the user to enter a target date.
The program will print out how long until the target date '''
from datetime import datetime

yearsUntil = 0
monthsUntil = 0
daysUntil = 0

def howManyDaysInAmonth(month):
    ''' expects an int as an argument that is equivalent to the month number and returns the number of 
    days in the given month.. does not count for leap year yet'''
    if month == 1 or month == 3 or month == 5 or month == 7 or month == 8 or month == 10 or month == 12:
        daysInAMonth = 31
    if month == 2:
        daysInAMonth = 28 # does not count for leap year.... yet
    else:
        daysInAMonth = 30
    return daysInAMonth

now = datetime.now() # holds the time/ date in the following format: 2021-05-06 13:36:49.706922
                                                                    
currentTime = now.strftime("%m/%d/%Y, %H:%M:%S") #converts time to a string in the following format: 05/07/2021, 07:23:01
                                                                                            #index : 01234567890123456789
                                                                                                             # 10

targetEvent = input(str("What event/ holiday would you like a countdown to?"))
targetDate = input(str('Please enter the date of %s (mm/dd/yyyy)' % targetEvent))
                                                    # index:           0123456789

nowMonth = currentTime[0] + currentTime[1] # current month
nowDay = currentTime[3] + currentTime[4] # current day
nowYear = currentTime[6] + currentTime[7] + currentTime[8] + currentTime[9] # current year

targetMonth = targetDate[0] + targetDate[1] # target month
targetDay = targetDate[3] + targetDate[4] # target day
targetYear = targetDate[6] + targetDate[7] + targetDate[8] + targetDate[9] # target year


if targetYear != nowYear:
    if targetYear < nowYear:
        print("***ERROR***")
        print("This time is in the past...")
    elif targetYear > nowYear:
        yearsUntil = int(targetYear) - int(nowYear) # calculates years until __

daysInAMonth = howManyDaysInAmonth(int(nowMonth)) # calling function to find out how many days are in the current month

if targetMonth != nowMonth:
    if targetMonth > nowMonth:
        monthsUntil = int(targetMonth) - int(nowMonth)
    elif targetMonth < nowMonth:
        monthsUntil = 12 - int(nowMonth) + targetMonth # calculates months until __

if targetDay != nowDay:
    if targetDay > nowDay:
        daysUntil = int(targetDay) - int(nowDay)
    if targetDay < nowDay:
        daysUntil = daysInAMonth - nowDay # calculates days until ___

print('There are:\n%s days\n%s months\n%s years\n... until %s' % (daysUntil, monthsUntil, yearsUntil, targetEvent))
