#Daniel Oh
#daniel.oh26@myhunter.cuny.edu
#March 29, 2022
#This program displays shelter population over time.

import pandas as pd
import matplotlib.pyplot as plt

n = input("Enter name of input file: ") #DHS_Daily_Report.csv assigned to variable "n"
pop = pd.read_csv(n) #variable "pop" is reading in the data from our "n" input file
pop.plot(x = "Date of Census", y = "Total Individuals in Shelter") #plot "pop" with the given x and y variables
plt.show() #show this in the form of a graph

pop["Fraction Children"] = pop["Total Children in Shelter"]/pop["Total Individuals in Shelter"] #Finding the fraction of children in the total population and calling it the "Fraction"
pop.plot(x = "Date of Census", y = "Fraction Children") #Plot the new graph with the fraction of children over time
plt.show() #Show the plotted graph


newfile = input("Enter name of output file: ") #Ask user for a new output file name
fig = plt.gcf() #Get the current plotted graph and save it as "fig"
fig.savefig(newfile) #Save the new figure named according to the input

