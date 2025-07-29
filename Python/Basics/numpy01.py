import numpy as np
#Creating arrays:
arr = np.array([1,2,3,4,5])
arr1 = np.zeros((5,3))
arr2 = np.ones((5,3))
arr3 = np.arange(0, 8, 2)
arr4 = np.linspace(0, 8, 2)
print(arr)
print(arr1)
print(arr2)
print(arr3)
print(arr4)
#array from existing data:
data = [2,5,4,3,1,34,6]
arr5 = np.array(data)
print(arr5)
#indexing and slicing:
index = arr[2]
slic = data[2:5]
print(index)
print(slic)
#binary operations:
sum = arr1 + arr2
prod = arr3 * arr4
print(sum, prod)
#mathematical funs:
sqrt = np.sqrt(arr5)
exp = np.exp(arr)
sin = np.sin(arr)
print(sqrt)
print(exp)
print(sin)
#sort
print(np.sort(arr5))