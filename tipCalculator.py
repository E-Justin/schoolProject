beforeTip = float(input("Enter the bill amount")) #user inputs bill amount
rating = int(input("Rate the service from 0 - 5:\n 5 is the best service \n 0 is the worst")) # user gives a rating of service from 0-5
afterTip = int # holds place for final total, after tip

tipPercent =  [0.1, 0.15, 0.20, 0.25, 0.3, 0.35] # array to hold different tip percentages
feels = "terrible" , "bad", "OK", "good", "great", "fantastic" # holds objective words to describe the service that correlate with the rating

totalTip = beforeTip * tipPercent[rating] # calculates total tip
afterTip = beforeTip + totalTip # adds total tip to original bill

print("Since the service was",feels[rating],",you should tip them $",round(totalTip, 2)) #prints tip amount and rounds it to the nearest penny
print("Which would bring the bill's total to : $" ,round(afterTip, 2)) # prints total bill after tip and rounds it to the nearest penny
