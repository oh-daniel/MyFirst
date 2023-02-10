#Daniel Oh
#daniel.oh26@myhunter.cuny.edu
#April 28. 2022
#This program makes a turtle walk 100 times

import turtle
import random

daniel = turtle.Turtle()
for i in range(100):
    daniel.forward(10)
    x = random.randrange(0,360)
    daniel.right(x)
