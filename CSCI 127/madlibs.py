#Daniel Oh
#daniel.oh26@myhunter.cuny.edu
#March 9, 2022
#This program asks the user for a noun and two verbs, and makes a sentence.

template = ("If it verb1 like a noun and verb2 like a noun, it probably is a noun.")

noun = (input("Enter a noun: ")) #str was added before but isn't necessary in this
template = template.replace("noun", noun) #replace each part one at a time after each input
verb1 = (input("Enter a verb: "))
template = template.replace("verb1", verb1)
verb2 = (input("Enter another verb: "))
template = template.replace("verb2", verb2)

print("New sentence:")
print(template)
