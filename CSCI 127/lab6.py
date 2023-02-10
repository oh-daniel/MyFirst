
import matplotlib.pyplot as plt

import pandas as pd
pop = pd.read_csv('nycHistPop.csv', skiprows=5)
print(pop)
pop.plot(x='Year')

plt.show()

print(pop['Bronx'].count()) #count displays the number of values, (excludes NaN values)

pop['BronxFraction'] = pop['Bronx']/pop['Total']

pop.plot(x = 'Year', y = 'BronxFraction')
plt.show()




rain = pd.read_csv('AustraliaRain.csv')
groupedData = rain.groupby('Location')
print(groupedData['Rainfall'].mean())

albury = rain.groupby('Location').get_group("Albury")
print(albury["Rainfall"].mean())
