// https://www.interviewbit.com/problems/atoi/
// Implement atoi to convert a string to an integer.

#include <climits>
int Solution::atoi(const string &A) {
    long res = 0;
    int i = 0;
    bool positive = true;
    while(A[i] == ' ') i++;
    if(A[i] == '+') {positive = true; i++; }
    else if(A[i] == '-') { positive = false; i++;}
    if(!isdigit(A[i])) return 0;
    else {
        while(isdigit(A[i])){
            res = res * 10 + A[i] - '0';
            if(res > INT_MAX) return positive ? INT_MAX:INT_MIN;
            i++;
        }
    }
    return positive? res:-res;
}
