#Daniel Oh
#daniel.oh26@myhunter.cuny.edu
#April 13, 2022
#This program uses folium to make a map of New York City

import folium

mapCUNY = folium.Map(location=[40.75, -74.125], zoom_start=10)
folium.Marker(location = [40.768731, -73.964915], popup = "Hunter College").add_to(mapCUNY)
mapCUNY.save(outfile="nycMap.html")

