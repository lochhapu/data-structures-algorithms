""" 
Built in lists can be used as arrays.
They are basically C vectors under the hood.
But they are not homogenous, can contain multiple types.
"""
built_in_list = [11, 22, 33, 44, 55]
print("Built in list:")
for i in range(len(built_in_list)): # traverse
    built_in_list[i] += 10 # access, update
    print(built_in_list[i])

"""
Type-specific array module, this is type-restricted and more memory efficient than lists.
"""
import array
arr = array.array('i', [1, 2, 3, 4, 5]) # 'i' = signed int
print("Array module:")
for i in range(len(arr)):
    arr[i] *= 10
    print(arr[i])
