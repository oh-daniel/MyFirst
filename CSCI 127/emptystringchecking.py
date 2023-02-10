#Daniel Oh
#daniel.oh26@myhunter.cuny.edu
#April 29, 2022
#This program asks the user for a non-empty string and will print out the entered string.

x = input("Enter a non-empty string: ")
while x == (""):
    print("That was empty. Try again.")
    x = input("Enter a non-empty string: ")
print(x)
