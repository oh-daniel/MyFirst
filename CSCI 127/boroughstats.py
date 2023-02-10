#Daniel Oh
#daniel.oh26@myhunter.cuny.edu
#March 24, 2022
#This program computes the average and max population over time for a borough
# entered by the user



import matplotlib.pyplot as plt

import pandas as pd
pop = pd.read_csv('nycHistPop.csv',skiprows=5)
pop.plot(x="Year")


borough = input("Enter borough: ")
print("Average population:", pop[borough].mean())
print("Maximum population:", pop[borough].max())
