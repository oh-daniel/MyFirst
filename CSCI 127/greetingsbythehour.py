#Daniel Oh
#daniel.oh26@myhunter.cuny.edu
#April 4, 2022
#This program prints a greeting that varies depending on the user input.

x = int(input("Enter hour (in 24 hour time): "))
if x < 12:
    print("Good morning")
elif x < 17:
    print("Good Afternoon")
else:
    print("Good Evening")
