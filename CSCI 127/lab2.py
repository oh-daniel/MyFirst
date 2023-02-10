mess = input("Enter a message: ")
print(mess)
for c in mess:
    print(c, ord(c)+1, chr(ord(c)+1))

myString = "FridaysSaturdaysSundays"

x = myString.split('s')

for i in x:
    print(i)

l = 32
print("The gc-percent is: ", l, "%")
