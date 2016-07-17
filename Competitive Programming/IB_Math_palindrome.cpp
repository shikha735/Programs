// Determine whether an integer is a palindrome. Do this without extra space.
// https://www.interviewbit.com/courses/programming/topics/math/problems/palindrome/

// Method 2
/*bool isPalindrome(int N){
    int div=1;
    while(N/div >= 10)
        div *= 10;
    while(N!=0){
        if(N/div != N%10)
            return false;
        N = (N%div)/10;
        div /= 100;
    }
    return true;
}*/

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
