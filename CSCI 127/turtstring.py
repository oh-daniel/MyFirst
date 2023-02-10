#Daniel Oh
#daniel.oh26@myhunter.cuny.edu
#March 21. 2022
#This program modifies an existing turtle program to allow for more commands.

import turtle
daniel = turtle.Turtle()
commands = input("Please enter a command string: ")

for x in commands:
    if x == 'F':
        daniel.forward(50)
    elif x == 'L':
        daniel.left(90)
    elif x == 'R':
        daniel.right(90)
    elif x == '^':
        daniel.penup()
    elif x == 'v':
        daniel.pendown()
    elif x == 'B':
        daniel.backward(50)
    elif x == 'S':
        daniel.stamp()
    elif x == 'l':
        daniel.left(45)
    elif x == 'r':
        daniel.right(45)
    elif x == 'p':
        daniel.color("purple")
    else:
        print("Error: unknown command")
        
        
