""" Part 2: myimage.py

Combining the Smokey processing files and mouse clicks, create a program that 
takes an image of your own choice and displays it on the screen.  Using the sample
code from the left navigation bar link and the powerpoint, create a single large program
that changes the image as described, clsoing the window between each operation.  The program
should display all operations TWICE, then quit.

Original image in an appropriately sized window.
gray scale version
black and white version
blurred 50% version
Edge Detected version
Returns to Original Version and continues down the list again."""
from functools import reduce


def blackAndWhite(image):
    """ converts the argument image to black and white"""
    i = normal.clone()
    blackPixel = (0, 0, 0)
    whitePixel = (255, 255, 255)
    for y in range(i.getHeight()):
        for x in range(i.getWidth()):
            (r, g, b) = i.getPixel(x, y)
            average = (r + g + b) // 3
            if average < 128:
                i.setPixel(x, y, blackPixel)
            else: 
                i.setPixel(x, y, whitePixel)
    i.draw()

def grayscale(image):
    """converts the argument image to grayscale"""
    i = normal.clone()
    for y in range(i.getHeight()):
        for x in range(i.getWidth()):
            (r, g, b) = i.getPixel(x, y)
            r = int(r * 0.299)
            g = int(g * 0.587)
            b = int(b * 0.114)
            lum = r + g + b
            i.setPixel(x, y, (lum, lum, lum))
    i.draw()

def blurFunction(image):
    """ Builds and returns a new image which is a 
    blurred copy of the argument image."""
    i = normal.clone()
    def tripleSum(triple1, triple2):
        (r1, g1, b1) = triple1
        (r2, g2, b2) = triple2
        return (r1 + r2, g1 + g2, b1 + b2)

    blur = i.clone()
    for y in range(1, i.getHeight() -1):
        for x in range(1, i.getWidth() -1):
            oldP = i.getPixel(x, y)
            left = i.getPixel(x - 1, y) # to left
            right = i.getPixel(x + 1, y) # to right
            top = i.getPixel(x, y -1) # above
            bottom = i.getPixel(x, y + 1) # below
            sums = reduce(tripleSum,[oldP, left, right, top, bottom])
            
            averages = tuple(map(lambda x: x // 5, sums))

            blur.setPixel(x, y, averages)

    blur.draw()
    return blur


def detectEdges(image, amount):
    """ Builds and returns a new image in which the edges of
    the argument image are highlighted and the colors are 
    reduced to black and white"""
    i = normal.clone()
    def average(triple):
        (r, g, b) = triple
        return(r + g + b) //3

    blackPixel = (0, 0, 0)
    whitePixel = (255, 255, 255)
    new = i.clone()

    for y in range(i.getHeight() - 1):
        for x in range(1, i.getWidth()):
            oldPixel = i.getPixel(x, y)
            leftPixel = i.getPixel(x -1, y)
            bottomPixel = i.getPixel(x, y +1)
            oldLum = average(leftPixel)
            leftLum = average(leftPixel)
            bottomLum = average(bottomPixel)
            if abs(oldLum - leftLum) > amount or \
                abs(oldLum - bottomLum) > amount:
                new.setPixel(x, y, blackPixel)
            else:
                new.setPixel(x,y, whitePixel)

    new.draw()
    return new



from images import Image

i = Image("smokey.gif")
normal = i.clone() # saves clone 



print('smokey.gif')
print("height: %s" % i.getHeight())
print("width: %s" % i.getWidth())


normal.draw() # normal picture

grayscale("smokey.gif") 

blackAndWhite("smokey.gif")

blurFunction("smokey.gif")

detectEdges("smokey.gif", 50)

normal.draw()

grayscale("smokey.gif")

blackAndWhite("smokey.gif")

blurFunction("smokey.gif")

detectEdges("smokey.gif", 50)
