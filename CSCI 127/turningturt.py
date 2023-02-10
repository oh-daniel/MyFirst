#Daniel Oh
#daniel.oh26@myhunter.cuny.edu
#March 8, 2022
#This program asks the user for 5 whole numbers; and turns the turtle left
# for the degrees entered, and then forward for 100 (for each number).

import turtle
daniel = turtle.Turtle()

for i in range(5):
    a = int(input("Enter a number: "))
    daniel.left(a)
    daniel.forward(100)
    

