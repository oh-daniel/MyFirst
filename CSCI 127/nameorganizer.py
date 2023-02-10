#Daniel Oh
#daniel.oh26@myhunter.cuny.edu
#April 1, 2022
#This program organizes people names with first name followed by last name.


namelist = input("Please enter your list of names: ")
splitnames = namelist.split("; ")
for name in splitnames:
        namelist2 = name.split(",")
        print(namelist2[1],namelist2[0])




