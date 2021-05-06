numbers = [72, 101, 108, 108, 111, 32, 87, 111, 114, 108, 100]

answer = (''.join(map(chr, numbers))) # converts list above into its ascii equivlaent character

print(answer)

backToAscii = (list(map(str, map(ord, answer)))) # converts a string into a list of ascii equivalent numbers

print(backToAscii)

index = 0
backToChar= backToAscii
while index < len(backToAscii): # converts a string list of numbers to its ascii equivalent character
    
    backToChar[index] = chr(int(backToAscii[index]))
    index += 1

print(backToChar)
