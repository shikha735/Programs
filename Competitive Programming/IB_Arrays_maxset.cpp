// https://www.interviewbit.com/courses/programming/topics/arrays/problems/maxset/
// Find out the maximum sub-array of non negative numbers from an array.

vector<int> Solution::maxset(vector<int> &A) {
    long long curr_sum=0,max_sum=0;
    int max_left=-1,curr_left=0,max_right=-1,curr_right=0;
    for(curr_right=0;curr_right<A.size();curr_right++){
        if(A[curr_right]<0){
            curr_sum=0;
            curr_left=curr_right+1;
        }
        else{
            curr_sum += (long long)A[curr_right];
            if(curr_sum > max_sum){
                max_sum = curr_sum;
                max_left = curr_left;
                max_right = curr_right+1;
            }
            else if(max_sum == curr_sum){
                if(max_right - max_left < curr_right+1 - curr_left){
                    max_right = curr_right+1;
                    max_left = curr_left;
                }
            }
        }
    }
    vector<int> B;
    if((max_left==-1)||(max_right==-1))
        return B;
    for(int i=max_left;i<max_right;i++){
        B.push_back(A[i]);
    }
    return B;
}