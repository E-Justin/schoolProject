'''This program will ask the user to input a date
    the program will display the amount of time between
    now and the date '''
from datetime import datetime


now = datetime.now() # holds the time/ date in the following format: 2021-05-06 13:36:49.706922
                                                                    #01234567890123456789012345   showing index for time/date above
currentTime = now.strftime("%H:%M:%S")
secondsInADay = 86400
minutesInADay = 1440
hoursInADay = 24

time = input('What time do you get off work?(hh/mm)')
if len(time) != 5:
    print('***ERROR***\n Please use the correct format: hh/mm')

thenHour = int(time[0] + time[1]) # extracts the hour and converts it to an int
thenMinute = int(time[3] + time[4]) # extracts the minutes and converts it to an int



print(currentTime) # prints current time in the following string format: hh:mm:ss

nowHour = currentTime[0] + currentTime[1] # current hour
nowMinute = currentTime[3] + currentTime[4] # current minute
nowSecond = currentTime[6] + currentTime[7] # current second
