// Determine whether an integer is a palindrome. Do this without extra space.
// https://www.interviewbit.com/courses/programming/topics/math/problems/palindrome/

bool Solution::isPalindrome(int A) {
    int rem = 0, res = 0, N = A;
    bool flag= false;
    while(N>0){
        rem = N%10;
        res = res*10 + rem;
        N /= 10;
    }
    if(res==A) flag = true;
    return flag;
}
