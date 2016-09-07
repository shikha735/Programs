// https://www.interviewbit.com/problems/reverse-bits/
// Reverse bits of an 32 bit unsigned integer

unsigned int Solution::reverse(unsigned int A) {
    unsigned int res = 0;
    int count = 32;
    while(count--){
        res <<= 1;
        res |= A&1;
        A >>= 1;
    }
    return res;
}
