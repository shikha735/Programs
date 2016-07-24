// https://www.interviewbit.com/problems/remove-duplicates-from-sorted-array/ 
// Remove duplicates from Sorted Array
// Eg: Given input array A = [1,1,2]
// Your function should return new length = 2 and A is now [1, 2]

int Solution::removeDuplicates(vector<int> &A) {
    int n = A.size();
    if(n <= 1) return n;
    
    int start = 0;
    for(int i=0;i<n;i++){
        if(A[i] != A[start]){
            start++;
            swap(A[i],A[start]);
        }
    }
    return start+1;
}
