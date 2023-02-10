import turtle

def welcomeMessage():
    print("Welcome to our herd of turtles demonstration")
    return()

def getInput():
    n = eval(input("Choose the number of turtles you want: "))
    return(n)

def setUpScreen():
    w = turtle.Screen()
    w.bgcolor("white")
    return()

def setUpTurtles(n):
    tList = []
    for i in range(n):
        t = turtle.Turtle()
        t.shape("turtle")
        tList.append(t)
    return(tList)

def moveForward(tList):
    for t in (tList):
        t.forward(20)
    return()

def stamp(tList):
    for t in tList:
        t.stamp()


def main():
    welcomeMessage()            #Writes a welcome message to the shell
    numTurtles = getInput()     #Ask for number of turles
    w = setUpScreen()           #Set up a green turtle window
    turtleList = setUpTurtles(numTurtles) #Make a list of turtles, different colors
    for i in range(10):
        moveForward(turtleList) #Move each turtle in the list forward
        stamp(turtleList)       #Stamp where the turtle stopped


if __name__ == "__main__":
    main()
