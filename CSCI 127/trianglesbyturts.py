#Daniel Oh
#daniel.oh26@myhunter.cuny.edu
#April 11, 2022
#This program draws nested triangles

import turtle
def setUp(t, dist, col):
    t.penup()
    t.forward(dist)
    t.pendown()
    t.color(col)

def triangle(t, length):
    if length > 10:
        for i in range(3):
            t.forward(length)
            t.left(120)
        triangle(t, length/2)


def nestedTriangle(t, length):
    if length > 10:
        for i in range(3):
            t.forward(length)
            t.left(120)
            nestedTriangle(t, length/2)

def main():
    n = int(input("Enter length: "))

    tom = turtle.Turtle()
    setUp(tom, -100, "darkgreen")
    triangle(tom, n)

    tess = turtle.Turtle()
    setUp(tess, 100, "steelblue")
    nestedTriangle(tess, n)

if __name__ == "__main__":
    main()
                  
