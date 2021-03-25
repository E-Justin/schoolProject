""" The mathematical steps for calculating when Easter occurs on any given year were invented long ago by very, bored people.  Actually, Easter Sunday is the first Sunday after the first full moon of spring. To compute the date, you can use this algorithm, invented by the mathematician Carl Friedrich Gauss in 1800:

Our goal with this program is twofold: (a) calculate when Easter occurs for any year given
 by the user, and (b) use tuples to print out values for an interesting user interface.

The program will create two tuples - one for months and one that holds the text version of
a number in a phrase, such as the Second (2), Fifth (5), or Twenty-First (21) for says.

Steps for calculating Easter

Let y be the year (such as 1800 or 2001).                                           
Divide y by 19 and call the remainder a. Ignore the quotient.                       
Divide y by 100 to get a quotient b and a remainder c.                              
Divide b by 4 to get a quotient d and a remainder e.                                
Divide 8 * b + 13 by 25 to get a quotient g. Ignore the remainder.
Divide 19 * a + b - d - g + 15 by 30 to get a remainder h. Ignore the quotient.
Divide c by 4 to get a quotient j and a remainder k.
Divide a + 11 * h by 319 to get a quotient m. Ignore the remainder.
Divide 2 * e + 2 * j - k - h + m + 32 by 7 to get a remainder r. Ignore the quotient.
Divide h - m + r + 90 by 25 to get a quotient n. Ignore the remainder.
Divide h - m + r + n + 19 by 32 to get a remainder p. Ignore the quotient.
Then Easter falls on day p of month n. """

month = ("January", "Feburary", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" )
order = ("First", "Second", "Third", "Fourth", "Fifth", "Sixth", "Seventh", "Eighth", "Ninth", "Tenth", "Eleventh", "Twelfth", "Thirteenth",
"Fourteenth", "Fifteenth", "Sixteenth", "Seventeenth", "Eighteenth", "Nineteenth", "Twentieth", "Twenty-first", "Twenty-second", 
"Twenty-third", "Twenty-fourth", "Twenty-fifth", "Twenty-sixth", "Twenty-seventh", "Twenty-eighth", "Twenty-ninth", "Thirtieth", "Thirty-first" )


y = int # year
y = int(input("Please enter a year to find out what date easter falls on for the entered year."))

a = y % 19 
b = y // 100
c = y % 100
d = b // 4
e = b % 4
g = (8 * b + 13) // 25
h = (19 * a + b - d -g + 15) % 30
j = c // 4
k = c % 4
m = (a + 11 * h) // 319
r = (2 * e + 2 * j - k - h + m + 32) % 7
n = (h - m + r + 90) // 25 # month
p = (h - m + r + n + 19) % 32 # day

indexMonth = round(n) - 1 # gets the correct index for the month
indexDay = round(p) - 1 # gets the correct index for the day

theDay = order[indexDay]
theMonth = month[indexMonth]

print("Easter occurs on the %s of %s in the year %d" % (theDay, theMonth, y))
