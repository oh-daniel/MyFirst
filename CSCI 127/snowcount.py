#Daniel Oh
#daniel.oh26@myhunter.cuny.edu
#March 15, 2022
#This program prints the number of pixels that are nearly white for a given png
# file

import matplotlib.pyplot as plt
import numpy as np

file = input("Enter file name: ")
img = plt.imread(file)

countSnow = 0
t = 0.75
for i in range(img.shape[0]):
        for j in range(img.shape[1]):
            if (img[i,j,0] > t) and (img[i,j,1] > t) and (img[i,j,2] > t):
                                     countSnow = countSnow + 1

print("Snow count is", countSnow)
                                     

