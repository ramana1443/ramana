# define two arrays
import numpy as np

a = np.array([1, 2, 3, 4, 5])
b = np.array([1, 3, 2, 4, 6])

print("Array A:",a)
print("Array B:",b)

# element-wise comparisons
print("\nA > B  :", np.greater(a, b))
print("A >= B :", np.greater_equal(a, b))
print("A < B  :", np.less(a, b))
print("A <= B :", np.less_equal(a, b))
print("A == B :", np.equal(a, b))