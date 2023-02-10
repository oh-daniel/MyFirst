#Daniel Oh
#daniel.oh26@myhunter.cuny.edu
#April 5, 2022
#This program modifies the parking ticket program from Lab 8.

import pandas as pd

csvFile = input("Enter file name: ")
tickets = pd.read_csv(csvFile)
attribute = input("Enter attribute: ")
print("The 10 worst offenders are: ", tickets[attribute].value_counts()[:10])
