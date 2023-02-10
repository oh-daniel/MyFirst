#Daniel Oh
#daniel.oh26@myhunter.cuny.edu
#March 11, 2022
#This program turns a given number of hours into days and hours.

hrs = int(input("Enter number of hours: "))

days = hrs // 24

print("Days: ",(days))

remainder = (hrs) % 24
print("Hours: ", (remainder))
    
