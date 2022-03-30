from tkinter import *
import tkinter.simpledialog
import breezypythongui



#initializing root window
root = Tk()
root.title('Bills Data')
root.geometry('300x300')

# buttons
#enterBillsButton = Button(root, text = "Enter Bills", fg = 'blue')
#enterBillsButton.grid(column = 1, row = 0, columnspan = 1)



#Entry field labels
electricityBillLabel = Label(root, text = "Electricity Amount", fg = 'blue', font = ("Helvetica", 12))
electricityBillLabel.grid(column = 0, row = 2, columnspan = 1)

mortgageBillLabel = Label(root, text = "Mortgage Amount", fg = 'blue', font = ("Helvetica", 12))
mortgageBillLabel.grid(column = 0, row = 3, columnspan = 1)

phoneBillLabel = Label(root, text = "Mortgage Amount", fg = 'blue', font = ("Helvetica", 12))
phoneBillLabel.grid(column = 0, row = 4, columnspan = 1)

insuranceBillLabel = Label(root, text = "Insurance Amount", fg = 'blue', font = ("Helvetica", 12))
insuranceBillLabel.grid(column = 0, row = 5, columnspan = 1)

waterBillLabel = Label(root, text = "Water Amount", fg = 'blue', font = ("Helvetica", 12))
waterBillLabel.grid(column = 0, row = 6, columnspan = 1)

internetBillLabel = Label(root, text = "Internet Amount", fg = 'blue', font = ("Helvetica", 12))
internetBillLabel.grid(column = 0, row = 7, columnspan = 1)

childCareLabel = Label(root, text = "Child Care Amount", fg = 'blue', font = ("Helvetica", 12))
childCareLabel.grid(column = 0, row = 8, columnspan = 1)

otherLabel = Label(root, text = "Other Amount", fg = 'blue', font = ("Helvetica", 12))
otherLabel.grid(column = 0, row = 9, columnspan = 1)


#entrie fields
electricityBillField = Entry()
electricityBillField.grid(column = 3, row = 2, columnspan = 1)

mortgageBillField = Entry()
mortgageBillField.grid(column = 3, row = 3, columnspan = 1)

phoneBillField = Entry()
phoneBillField.grid(column = 3, row = 4, columnspan = 1)

insuranceBillField = Entry()
insuranceBillField.grid(column = 3, row = 5, columnspan = 1)

waterBillField = Entry()
waterBillField.grid(column = 3, row = 6, columnspan = 1)

internetBillField = Entry()
internetBillField.grid(column = 3, row = 7, columnspan = 1)

childCareField = Entry()
childCareField.grid(column = 3, row = 8, columnspan = 1)

otherField = Entry()
otherField.grid(column = 3, row = 9, columnspan = 1)


root.mainloop()
