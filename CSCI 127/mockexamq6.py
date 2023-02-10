#portion image

import numpy as np
import matplotlib.pyplot as plt

fileName = input("Enter file name: ")
img = plt.imread(fileName)
height = img.shape[0]
width = img.shape[1]
img2 = img[:height // 2, width // 2:]
plt.imshow(img2)
plt.show()
