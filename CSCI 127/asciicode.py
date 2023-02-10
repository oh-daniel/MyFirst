#Daniel Oh
#daniel.oh26@myhunter.cuny.edu
#February 24, 2022
#This program prompts the user to enter a phrase, and then prints out the
#ASCII code of each character in the phrase

n = input("Enter a phrase: ")

print("In ASCII: ")
for c in n:
    print(ord(c))
    
