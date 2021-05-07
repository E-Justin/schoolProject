'''This program will ask the user to input a time
    the program will display the amount of time between
    now and then '''
from datetime import datetime


now = datetime.now() # holds the time/ date in the following format: 2021-05-06 13:36:49.706922
                                                                    
currentTime = now.strftime("%H:%M:%S")# converts time to a string in the following format: hh:mm:ss

secondsInADay = 86400
minutesInADay = 1440
hoursInADay = 24

minutesUntil = 0
secondsUntil = 0
hoursUntil = 0
print("Please answer the following question in military time")
time = input('What time do you get off work?(hh/mm)')
if len(time) != 5:
    print('***ERROR***\n Please use the correct format: hh/mm')

thenHour = int(time[0] + time[1]) # extracts the hour and converts it to an int
thenMinute = int(time[3] + time[4]) # extracts the minutes and converts it to an int



print("Current time :%s" % currentTime) 

nowHour = currentTime[0] + currentTime[1] # current hour
nowMinute = currentTime[3] + currentTime[4] # current minute
nowSecond = currentTime[6] + currentTime[7] # current second

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
    


print("You get off of work in:\n%d hours\n%d minutes\n%d seconds" % (hoursUntil, minutesUntil, secondsUntil))
