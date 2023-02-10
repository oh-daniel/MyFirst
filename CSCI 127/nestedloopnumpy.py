#nested loop for numpy

import numpy as np

fileName = input("Enter file name: ")
grid = np.loadtxt(fileName)
min_row = 0
min_col = 0
for i in range(len(grid)):
    for j in range(len(grid)):
        if grid[i,j] < grid[min_row, min_col]:
            grid[i] = min_row
            grid[j] = min_col
print(grid[min_row, min_col])
    
    
