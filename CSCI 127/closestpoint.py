#Daniel Oh
#daniel.oh26@myhunter.cuny.edu
#April 26, 2022
#This program maps GIS data from NYC OpenData CSV files and marks the current location and closest point

import pandas as pd
import folium

def getData():
    csvFile = input("Enter file name: ")
    df = pd.read_csv(csvFile)
    return(df)

def getColumnNames():
    latColName = input("Enter column name for latitude: ")
    lonColName = input("Enter column name for longitude: ")
    return(latColName, lonColName)

def getLocale():
    lat = float(input("Enter current latitude: "))
    lon = float(input("Enter current longitude: "))
    return(lat, lon)

def computeDist(x1,y1,x2,y2):
    d = (x1-x2)**2 + (y1-y2)**2
    return(d)
    
def dotAllPoints(cMap,df,latCol,lonCol):
     """
     Mark all points in the latCol, lonCol with dots (little circle markers)
     """
     for i, row in df.iterrows():
          folium.CircleMarker(location=[row[latCol],row[lonCol]], radius=4,color='red').add_to(cMap)


def markAndFindClosest(cMap,df,latCol,lonCol,cLat,cLon):
     """
     Goes through the list of points, marking each with a circle marker.
     Finds the closest point using the computeDist() function and
     Returns the lat and lon of closest point.
     """

     #Find closest marker:
     df['Dist'] = df[[latCol,lonCol]].apply(lambda row: computeDist(*row,cLat,cLon), axis=1)
     minRow = df[df['Dist'] == df['Dist'].min()]

     #Make a marker for the closest point:
     folium.Marker(location=[float(minRow[latCol]),float(minRow[lonCol])],
                   popup="Closest").add_to(cMap)
     #Make a marker for the starting point
     folium.Marker(location=[cLat,cLon],
                   popup="You Are Here",
                   icon=folium.Icon(color='red')).add_to(cMap)
     

def writeMap(cMap):
     """
     Writes the inputted map, cMap, to the file specified by the user.
     """
     outF = input('Enter output file: ')
     cMap.save(outfile=outF)



def main():
     dataF = getData()
     latColName, lonColName = getColumnNames()
     lat, lon = getLocale()
     cityMap = folium.Map(location = [lat,lon], tiles = 'cartodbpositron',zoom_start=11)
     dotAllPoints(cityMap,dataF,latColName,lonColName)
     markAndFindClosest(cityMap,dataF,latColName,lonColName,lat,lon)
     writeMap(cityMap)


if __name__ == "__main__":
     main()
    
    
