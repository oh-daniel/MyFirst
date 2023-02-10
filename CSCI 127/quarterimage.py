#Daniel Oh
#daniel.oh26@myhunter.cuny.edu
#March 31, 2022
#This program saves the lower left quarter of an image provided by the user.

import numpy as np
import matplotlib.pyplot as plt #import libraries
file = input("Enter image full name: ") #Ask user for the image name, assign it to "file" variable
img = plt.imread(file) #Read in the image, call it "img"
height = img.shape[0] #"height" is the rows of the image
width = img.shape[1] #"width" is the columns of the image
img2 = img[height//2:, :width//2] #the modified image takes the midpoint of height to the end, and the beginning to midpoint of width. (Lower left)

newfile = input("Enter output file: ") #newfile is the variable for what we will call modified image
plt.imsave(newfile, img2) #save img2 as the modified image, for what the user wants to call it

#plt.show() and plt.imshow() commands have been taken out
