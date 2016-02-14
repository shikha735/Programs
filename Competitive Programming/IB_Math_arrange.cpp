// Rearrange a given array so that Arr[i] becomes Arr[Arr[i]] with O(1) extra space.
// https://www.interviewbit.com/courses/programming/topics/math/problems/arrange/

void Solution::arrange(vector<int> &A) {
    int N;
    N = A.size();
    for(int i = 0; i < N; i++){
        A[i] += (A[A[i]]%A.size())*A.size();
    }
    for(int i = 0; i < N; i++){
        A[i] /= A.size();
    }
}
