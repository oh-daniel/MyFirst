#Daniel Oh
#daniel.oh26@myhunter.cuny.edu
#February 25, 2022
#This program creates an encrypted message.

message = input("Enter a word: ")
newMessage = ""
for c in message:
    offset = ord(c) - ord('a') + 13
    wrap = offset %26
    newChar = chr(ord('a') + wrap)
    newMessage = newMessage + newChar

print("Your word in code is", newMessage)
