#Daniel Oh
#daniel.oh26@myhunter.cuny.edu
#April 15, 2022
#This progeam creates a map with markets for traffic collisions.

import folium
import pandas as pd
fileName = input("Enter CSV file name: ") #collisionsThHunterBday.csv
newFile = input("Enter output file: ") #thMap.html
collisions = pd.read_csv(fileName)
nyMap = folium.Map(location=[41, -74])
for index,row in collisions.iterrows():
    lat = row["LATITUDE"]
    lon = row["LONGITUDE"]
    time = row["TIME"]
    newMarker = folium.Marker([lat, lon], popup=time)
    newMarker.add_to(nyMap)

nyMap.save(outfile=newFile)
