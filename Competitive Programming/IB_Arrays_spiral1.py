# https://www.interviewbit.com/courses/programming/topics/arrays/problems/array_impl1/
# Given a matrix of m * n elements (m rows, n columns), return all elements of the matrix in spiral order.

class Solution:
    # @param A : tuple of list of integers
    # @return a list of integers
    def spiralOrder(self, A):
        result = []
        T = 0
        B = len(A)-1
        R = len(A[0])-1
        L = 0
        dir = 0
        while (T <= B) and (L <= R):
            if dir == 0:
                for i in range(L,R+1,1):
                    result.append(A[T][i])
                T += 1
                dir = 1
            elif dir == 1:
                for i in range(T,B+1,1):
                    result.append(A[i][R])
                R -= 1
                dir = 2
            elif dir == 2:
                for i in range(R,L-1,-1):
                    result.append(A[B][i])
                B -= 1
                dir = 3
            else:
                for i in range(B,T-1,-1):
                    result.append(A[i][L])
                L += 1
                dir = 0
        return result
