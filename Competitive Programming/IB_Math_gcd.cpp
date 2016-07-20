// Given 2 non negative integers m and n, find gcd(m, n)
// https://www.interviewbit.com/courses/programming/topics/math/problems/gcd/

int Solution::gcd(int A, int B) {
    int fac;
    while(B!=0){
        fac = A%B;
        A = B;
        B = fac;
    }
    return A;
}
