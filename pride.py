count = 0 # counts lines in file
countThe = 0 # counts 'the'
countA = 0 # counts 'a'
countAn = 0 # counts 'an'
countEliz = 0 # counts 'Elizabeth'
countJane = 0 # counts 'jane'
countMary = 0 # counts 'mary'
countCat = 0 # counts 'catherine'
countLydia = 0 # counts 'lydia'

f = open("prideandprejudice.txt", 'r') # opens the file for reading
for line in f: # reads the file one line at a time
    count = count + 1 # counts each line of text in the file
    

f = open("prideandprejudice.txt", 'r') # get file object reference to the file
data = f.read() # read content of file to string
countThe += data.count('the ') # counts occurance of 'the' in file
countThe += data.count('The ') 
countThe += data.count('THE ')
countA += data.count(' a ') # counts occurance of 'a' 
countA += data.count(' A ')
countAn += data.count(' an ') # counts occurance of 'an'
countAn += data.count(' An ')

countEliz += data.count('Elizabeth')
countEliz += data.count('ELIZABETH')

countJane += data.count('Jane')
countJane += data.count('JANE')

countMary += data.count('Mary')

countCat += data.count('Catherine')
countCat += data.count('CATHERINE')

countLydia += data.count('Lydia')
countLydia += data.count('LYDIA')


print("*****************************")
print("Pride and Prejudice Program")
print("*****************************")
print("Number of lines: %d \n" % count)
print("The : %d " % countThe)
print("A : %d " % countA)
print("An : %d \n" % countAn)
print("Character Appearances: ")
print("Elizabeth : %d " % countEliz)
print("Jane : %d " % countJane)
print("Mary : %d " % countMary)
print("Catherine : %d " % countCat)
print("Lydia : %d " % countLydia)


