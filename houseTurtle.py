""" draw a house using turtle """

import turtle
from polygons import *


t = turtle.Pen()


t.home

t.pencolor("red")
t.fillcolor("red")
t.begin_fill()
t.forward(100) # starts rectangle 
t.right(90)
t.forward(250)
t.right(90)
t.forward(200)
t.right(90)
t.forward(250)
t.right(90)
t.forward(100) # completes rectangle that is 200 x 250 pixels
t.end_fill()
t.home # moves turtle back to the center and facing East



t.home
t.pencolor("brown")
t.fillcolor(157, 85, 16)
t.begin_fill()
t.forward(130)
t.left(135)
t.forward(185)
t.left(90)
t.forward(185)
t.left(135)
t.forward(130) # roof is done
t.end_fill()

t.left(180)
t.forward(130)
t.right(135)
t.forward(35)
t.left(45) # lines above are used to orient the chiminy
t.pencolor("gray")
t.fillcolor("gray")
t.begin_fill()
t.forward(100) # begins chiminy 
t.right(90)
t.forward(35)
t.right(90)
t.forward(71) # chiminy is done
t.end_fill()
t.up()
t.home()

t.up()
t.right(90)
t.pencolor("brown")
t.fillcolor(157, 85, 16)
t.begin_fill()
t.forward(125) # starts the door @ half of the house rectangle
t.down()
t.left(90)
t.forward(30) # begins rectangle for the door (half of width)
t.right(90)
t.forward(125) # right length
t.right(90)
t.forward(60)# bottom width
t.right(90)
t.forward(125) # left length
t.right(90)
t.forward(30) # complets top of door
t.end_fill()

t.up()
t.pencolor("yellow")
t.right(180)
t.forward(30)
t.left(90)
t.forward(70)
t.left(90)
t.forward(50)
t.down()
t.fillcolor("yellow")
t.begin_fill()
t.circle(7) # draws door knob
t.end_fill()

t.up()
t.home()
t.pencolor("black")
t.right(90)
t.forward(140)
t.right(90) 
t.forward(50) # distance from center of door
t.down()
t.fillcolor(0, 152, 255)
t.begin_fill()
t.forward(40) # width
t.right(90)
t.forward(80) # length
t.right(90)
t.forward(40) # width
t.right(90)
t.forward(80) # length     rectangle is done
t.right(90)
t.forward(20) # sets up pen for the window frame 
t.width(4)
t.right(90)
t.forward(80)
t.right(180)
t.forward(40)
t.right(90)
t.forward(20)
t.right(180)
t.forward(40)  # window is done
t.end_fill()

t.up()
t.right(90)
t.forward(40)
t.left(90)
t.forward(100)
t.down()
t.width(1)
t.fillcolor(0, 152, 255)
t.begin_fill()
t.forward(40) #begins other window
t.left(90)
t.forward(80)
t.left(90)
t.forward(40)
t.left(90)
t.forward(80)
t.left(90)
t.forward(20)
t.width(4)
t.left(90)
t.forward(80)
t.left(180)
t.forward(40)
t.left(90)
t.forward(20)
t.left(180)
t.forward(40) # second window done
t.end_fill()






turtle.Screen().exitonclick() # allows the user to determine when the drawing window is closed (by clicking)
