import numpy as ai
# array creating from tuple
arr = ai.array((3,6,7,1,5))
print("The array of element is creating from tuple = ",arr)
# convert an array one datatype to other datatype
arr1 = ai.array((3,6,1,7,9),dtype='float')
print("The  integers arrays convert into float type arrays = ",arr1)
#creating 3*4 array by  all zeros
arr2 = ai.zeros((3,4))
print("The array create 3*4 by all zeros is = ",arr2)
#creating a consant value complex type of arrays
arr3 = ai.full((3,3),6,dtype='complex')
print("\nAn Arrays initializes with all 6s"
      "Array type is complex:\n",arr3)