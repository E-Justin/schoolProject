'''This program will ask the user to input a time and date
    the program will display the amount of time between
    now and then '''
from datetime import datetime


now = datetime.now() # holds the time/ date in the following format: 2021-05-06 13:36:49.706922
                                                                    
currentTime = now.strftime("%m/%d/%Y, %H:%M:%S") #converts time to a string in the following format: 05/07/2021, 07:23:01
                                                                                            #index : 01234567890123456789
                                                                                                             # 10

secondsInADay = 86400
minutesInADay = 1440
hoursInADay = 24

daysUntil = 0
monthsUntil = 0
yearsUntil = 0
minutesUntil = 0
secondsUntil = 0
hoursUntil = 0

print("Please answer the following question in military time")
thenDate = input(str('Enter a date that you want a countdown to? (mm/dd/yyyy)'))
if len(thenDate) != 10:
    print("***ERROR***") # error message if date is not in correct format and prompts user to re enter target date
    print("Please user the coorect format (mm/dd/yyyy)")
    thenDate = input(str('Enter a date that you want a countdown to? (mm/dd/yyyy)'))

thenTime = input(str('Do you want a countdown to the time too?\nOr just the date? y/n'))

if thenTime == 'n' or thenTime == 'N': # if the time does not matter, sets the time to 00:00 (midnight)
    thenTime = '00/00'
if thenTime == 'y' or thenTime =='Y': # if the time does matter, gets the target time from the user.
    thenTime = input(str('Please enter the target time (hh/mm)'))
if len(thenTime) != 5: # makes sure that the user entered the correct format.. kind of
    print('***ERROR***\n Please use the correct format: hh/mm')

thenHour = int(thenTime[0] + thenTime[1]) # extracts the hour and converts it to an int
thenMinute = int(thenTime[3] + thenTime[4]) # extracts the minutes and converts it to an int

print("Current time :%s" % currentTime)

# currentTime format: 05/07/2021, 07:23:01
#               index:01234567890123456789
#                               10

nowHour = currentTime[12] + currentTime[13] # current hour
nowMinute = currentTime[15] + currentTime[16] # current minute
nowSecond = currentTime[18] + currentTime[19] # current second
nowMonth = currentTime[0] + currentTime[1] # current month
nowDay = currentTime[3] + currentTime[4] # current day
nowYear = currentTime[6] + currentTime[7] + currentTime[8] + currentTime[9] # current year



if int(nowHour) != thenHour:
    if int(nowHour) < thenHour:
        hoursUntil = int(thenHour) - int(nowHour)
if int(nowMinute) != thenMinute:
    if int(nowMinute) < thenMinute:
        minutesUntil = int(thenMinute) - int(nowMinute)
    elif int(nowMinute) > thenMinute:
        minutesUntil = 60 - int(nowMinute) + int(thenMinute)
        hoursUntil = hoursUntil -1
if nowSecond != '00':
    secondsUntil = 60 - int(nowSecond)
    


print("You have:\n%d hours\n%d minutes\n%d seconds" % (hoursUntil, minutesUntil, secondsUntil))
