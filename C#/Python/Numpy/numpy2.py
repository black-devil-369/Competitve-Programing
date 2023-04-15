import numpy as np
arr = np.array([[-1, 2, 0, 4],
                [4, -0.5, 6, 0],
                [2.6, 0, 7, 8],
                [3, -7, 4, 2.0]])
print(end="")
print(arr)
# creating a given array as row and colume
print("printing a arrays in 2 row and colums")
list_array = arr[:2 ,::2]
print(list_array)
#creating a first arrays
a  = np.array([[3,6],
              [7,8]])
#creating a second arrays
b = np.array([[7,10],
             [5,4]])
#adding 1 in array a of each element 
print("Adding 1 in all element of array a",a+1)
#subtratic 2 from array b of each element
print("Subtracting 2 in all element of arrays b",b-2)
# sum of all element of of arrays a and b
print("The sum of all element of arrays a",a.sum())
#sum of all element of  arrays b is 
print("The sum of all element of array b is",b.sum())
# adding two arr element 
print("The sum of a+b is",a+b)
