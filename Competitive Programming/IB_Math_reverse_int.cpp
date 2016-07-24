// https://www.interviewbit.com/problems/reverse-integer/
/**
 *
 *Example1:
 * x = 123,
 * return 321
 *
 *Example2:
 * x = -123,
 * return -321
 *
 * Return 0 if the result overflows and does not fit in a 32 bit signed integer
 *
 */

int Solution::reverse(int A) {
    int res=0;
        while(A!=0){
            if(res > INT_MAX/10 || res < INT_MIN/10) return 0;
            res = res*10 + A%10;
            A /= 10;
        }
        return res;
}
