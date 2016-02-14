// https://www.interviewbit.com/courses/programming/topics/arrays/problems/positive/
// Given an unsorted integer array, find the first missing positive integer.

int moveNeg(vector<int> &A) {
    int startIndex=0;
    for(int i=0;i<A.size();i++){
        if(A[i]<=0){
            A.erase(A.begin()+i);
            startIndex++;
        }
    }
    return startIndex;
}

int findNo(vector<int> &B){
    for(int i=0;i<B.size();i++){
        if((abs(B[i])-1 < B.size())&&(B[abs(B[i])-1] > 0))
            B[abs(B[i])-1] *= -1;
    }
    
    for(int i=0;i<B.size();i++){
        if(B[i]>0)
            return i+1;
    }
    return B.size()+1;
}

int Solution::firstMissingPositive(vector<int> &A) {
    int start = moveNeg(A);
    return findNo(A);
}
