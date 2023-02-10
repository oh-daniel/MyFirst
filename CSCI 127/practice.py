phrase = input("Enter a phrase: ")
print("Your phrase:", phrase)
print("Your phrase in capital letters:", phrase.upper())
phrase_split = phrase.split()
acronym = ""
for i in phrase_split:
    acronym = acronym + i[0].upper()
    
print("Acronym:", acronym)
