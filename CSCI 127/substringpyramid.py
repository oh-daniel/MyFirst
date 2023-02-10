#Daniel Oh
#daniel.oh26@myhunter.cuny.edu
#March 7, 2022
#This program creats a substring pyramid.

s = input("Enter a string: ")

ls = len(s)
for i in range (0, ls, 1):
    print (s[0:i])

for j in range (0, ls+1, 1):
    print (s[j:ls])


print("Thank you for using my program!")



        




            
