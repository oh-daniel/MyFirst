#Daniel Oh
#daniel.oh26@myhunter.cuny.edu
#March 18, 2022
#This program asks the user for nouns, and approximates the fraction that are
# plural, as well as showing the number of words.

#This program assumes that you only have a space after a noun if another noun
# will come after
#This program also assumes that the input will not be blank

nounlist = input("Enter nouns: ") #Nouns are seperated by spaces
num = nounlist.count(' ') 
if num != 0 or 1: #one noun with space after causes error
    num = num + 1
print("Number of words: ",num)
plurals = nounlist.count("s ")
if nounlist[-1] == "s":
    plurals = plurals + 1
fraction = plurals / num
print("Fraction of your list that is plural is", fraction)
