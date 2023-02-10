#Daniel Oh
#daniel.oh26@myhunter.cuny.edu
#April 8, 2022
#This program asks the user for a CSV of collision data and then lists the top
# three contributing factors for the collisions.

import pandas as pd
csvFile = input("Enter CSV file name: ") #get the input file (csv format)
collisions = pd.read_csv(csvFile) #read in the csv file
print("Top three contributing factors for collisions:")
print(collisions["CONTRIBUTING FACTOR VEHICLE 1"].value_counts()[:3]) #top 3 contributing factors
