#Daniel Oh
#daniel.oh26@myhunter.cuny.edu
#March 24, 2022
#This program displays NYC historical population data based on the inputted borough

import matplotlib.pyplot as plt

import pandas as pd
pop = pd.read_csv('nycHistPop.csv',skiprows=5)
pop.plot(x="Year")

borough = input("Enter borough name: ")
pop['Fraction'] = pop[borough]/pop['Total']
pop.plot(x = 'Year', y = 'Fraction')

newname = input("Enter output file name: ")
fig = plt.gcf()
fig.savefig(newname)
