#Daniel Oh
#daniel.oh26@myhunter.cuny.edu
#April 7, 2022,
#This program takes a number between 1 and 12 as a parameter and returns the
# corresponding month as a string

def monthString(monthNum):
    monthString = ""
    if monthNum == (1):
        return("January") #use return to bring "January" to the mString variable, print() won't work
    elif monthNum == (2):
        return("February")
    elif monthNum == (3):
        return("March")
    elif monthNum == (4):
        return("April")
    elif monthNum == (5):
        return("May")
    elif monthNum == (6):
        return("June")
    elif monthNum == (7):
        return("July")
    elif monthNum == (8):
        return("August")
    elif monthNum == (9):
        return("September")
    elif monthNum == (10):
        return("October")
    elif monthNum == (11):
        return("November")
    elif monthNum == (12):
        return("December")
    else:
         return(monthString)



def main():
     n = int(input('Enter the number of the month: '))
     mString = monthString(n)
     print('The month is', mString)


if __name__ == "__main__":
     main()
