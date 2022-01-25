f = open('Exercise Files\inputFile.txt', 'r') # opens file for reading (this file already exists)
passFile = open('PassFile.txt', 'w') # creates a new file and opens it for writing to store the passing grades
failFile = open('FailFile.txt', 'w') # create a new file and opens it for writing to store the failing grades
# read/ print contents of file print(f.read())
#count = 0
for line in f: # gets one line at a time
    line_split = line.split() # splits string into a list
    if line_split[2] == 'P': # if the student received a passing grade (P)
        #print(line)
        passFile.write(line)
    else: # if the student received a failing grade (F)
        failFile.write(line)

    #print(str(count) + line) # print one line at a time with counter in front
    #count += 1
f.close()
passFile.close()
failFile.close()

