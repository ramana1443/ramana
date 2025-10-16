import numpy as np
arr1 = np.array([1,2,3,4])
arr2 = np.array([4,3,2,1])
print("array 1", arr1)
print("array 2", arr2)
print("addition", np.add(arr1, arr2))
print("all > 0 in arr1:",np.all(arr1>0))
print("arr1 > arr2:",np.all(arr2>0))