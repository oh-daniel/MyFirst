#Daniel Oh
#daniel.oh26@myhunter.cuny.edy
#March 1, 2022
#This program shows the shades of blue

import turtle

turtle.colormode(255)
daniel = turtle.Turtle()
daniel.shape("turtle")
daniel.backward(1000)

for i in range(50,255,1):
    daniel.forward(10)
    daniel.pensize(i)
    daniel.color(0,0,i)

