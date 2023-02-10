import numpy as np
import matplotlib.pyplot as plt

elevations = np.loadtxt('elevationsNYC.txt')
plt.imshow(elevations)
plt.show()

mapShape = elevations.shape + (3,)
floodMap = np.zeros(mapShape)

for x in range(mapShape[0]):
    for y in range(mapShape[1]):
        if elevations[x,y] <= 0:   
           floodMap[x,y,2] = 1.0     
        elif elevations[x,y] <= 6:    
           floodMap[x,y,0] = 1.0    
        else: 
            floodMap[x,y,1] = 1.0  


plt.imshow(floodMap)
plt.show()


