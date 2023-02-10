#Daniel Oh
#daniel.oh26@myhunter.cuny.edu
#March 10, 2022
#This program creates an image of red and white stripes, depending on the user's
# wanted dimensions.


import matplotlib.pyplot as plt
import numpy as np

size = int(input("Enter the size: "))
ofile = input("Enter output file: ")

img = np.ones((size,size,3)) #making the dimensions as the user asked
img[0::2,:,1:] = 0 #setting G and B channel to 0
plt.imshow(img) #these plt functions taken off when submitted.
plt.show()      

plt.imsave(ofile, img)
