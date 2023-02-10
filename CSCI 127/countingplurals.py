#Daniel Oh
#daniel.oh26@myhunter.cuny.edu
#March 18, 2022
#This program asks the user for nouns, and approximates the fraction that are
# plural, as well as showing the number of words.

nounlist = input("Enter nouns: ") #Nouns are seperated by spaces
num = nounlist.count(' ') 
count = 0



#number of plurals
splitlist = nounlist.split()
split_index = len(splitlist) - 1
plural = 0
for j in range(split_index, -1, -1):
    x = (splitlist[j])
    if len(x) != 0:
        count += 1 
    if x[-1] == 's':
        plural += 1
if count == 0:
    perc = 0
else:
    perc = (plural / count) * 100
print("Number of words: ", count)
print("Percentage of plurals:", perc,"%")


