# Rotate an array by 90 degrees

import copy
# @param A : list of list of integers
# @return the same list modified
def rotate(A):
    res = copy.deepcopy(A)
    n = len(A)
    for i in range(0,n):
        for j in range(n-1,-1,-1):
            res[i][n-1-j] = A[j][i]
    return res

A = [[1,2],[3,4]]
print rotate(A)

# method 2:

def rotate2(A):
	return list(zip(*A[::-1]))

print rotate2(A)

'''
O(n^2) time and O(1) space algorithm ( without any workarounds and hanky-panky stuff! )

Rotate by +90:

Transpose
Reverse each row
Rotate by -90:

Transpose
Reverse each column
Rotate by +180:

Method 1: Rotate by +90 twice

Method 2: Reverse each row and then reverse each column

Rotate by -180:

Method 1: Rotate by -90 twice

Method 2: Reverse each column and then reverse each row

Method 3: Reverse by +180 as they are same
'''