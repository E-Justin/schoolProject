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

def blackAndWhite(image):
    """ converts the argument image to black and white"""
    blackPixel = (0, 0, 0)
    whitePixel = (255, 255, 255)
    for y in range(image.getHeight()):
        for x in range(image.getWidth()):
            (r, g, b) = image.getPixel(x, y)
            average = (r + g + b) // 3
            if average < 128:
                image.setPixel(x, y, blackPixel)
            else: 
                image.setPixel(x, y, whitePixel)

def grayscale(image):
    """converts the argument image to grayscale"""
    for y in range(image.getHeight()):
        for x in range(image.getWidth()):
            (r, g, b) = image.getPixel(x, y)
            r = int(r * 0.299)
            g = int(g * 0.587)
            b = int(b * 0.114)
            lum = r + g + b
            image.setPixel(x, y, (lum, lum, lum))

def blur(image):
    """ Builds and returns a new image which is a 
    blurred copy of the argument image."""

    def tripleSum(triple1, triple2):
        (r1, g1, b1) = triple1
        (r2, g2, b2) = triple2
        return (r1 + r2, g1 + g2, b1 + b2)

    new = image.clone()
    for y in range(1, image.getHeight() -1):
        for x in range(1, image.getWidth() -1):
            oldP = image.getPixel(x, y)
            left = image.getPixel(x - 1, y) # to left
            right = image.getPixel(x + 1, y) # to right
            top = image.getPixel(x, y -1) # above
            bottom = image.getPixel(x, y + 1) # below
            sums = reduce(tripleSum,
                           [oldP, left, right, top, bottom])
            
            averages = tuple(map(lambda x: x // 5, sums))

            new.setPixel(x, y, averages)
    return new


def detectEdges(image, amount):
    """ Builds and returns a new image in which the edges of
    the argument image are highlighted and the colors are 
    reduced to black and white"""
    
    def average(triple):
        (r, g, b) = triple
        return(r + g + b) //3

    blackPixel = (0, 0, 0)
    whitePixel = (255, 255, 255)
    new = image.clone()

    for y in range(image.getHeight() - 1):
        for x in range(1, image.getWidth()):
            oldPixel = image.getPixel(x, y)
            leftPixel = image.getPixel(x -1, y)
            bottomPixel = image.getPixel(x, y +1)
            oldLum = average(leftPixel)
            leftLum = average(leftPixel)
            bottomLum = average(bottomPixel)
            if abs(oldLum - leftLum) > amount or \
                abs(oldLum - bottomLum) > amount:
                new.setPixel(x, y, blackPixel)
            else:
                new.setPixel(x,y, whitePixel)
    return new

from images import Image

i = Image("smokey.gif")
clone = i.clone() # saves clone 
i.draw()
