// https://www.interviewbit.com/problems/longest-palindromic-substring/
// Given a string S, find the longest palindromic substring in S.

string palin(string A, int begin,int end){
    while(begin >=0 && end < A.size() && A[begin] == A[end]){
        begin--;
        end++;
    }
    int len = end - begin - 1;
    return A.substr(begin+1, len);
}
string Solution::longestPalindrome(string A) {
    if(A.empty() || A.size() == 1){
        return A;
    }
    
    string longest = A.substr(0,1);
    for(int i=0;i<A.size();i++){
        string temp = palin(A,i,i);
        if(longest.size() < temp.size())
            longest = temp;
        
        temp = palin(A,i,i+1);
        if(longest.size() < temp.size())
            longest = temp;
    }
    return longest;
}
