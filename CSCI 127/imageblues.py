#Daniel Oh
#daniel.oh26@myhunter.cuny.edu
#March 3, 2022
#This program asks the user for an image.png file name and the name of an
# output file, then creates a new image that has only the blue channel
# of the original image.


import matplotlib.pyplot as plt
import numpy as np

n = input("Enter name of the input file: ")
b = input("Enter name of the output file: ")


img = plt.imread(n)
plt.imshow(img)
plt.show()

img2 = img.copy()   
img2[:,:,0] = 0 #0 = red, 1 = green, 2 = blue
img2[:,:,1] = 0

plt.imshow(img2)
plt.show()

plt.imsave(b, img2)


