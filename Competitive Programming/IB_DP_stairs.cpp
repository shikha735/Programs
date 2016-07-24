// You are climbing a stair case. It takes n steps to reach to the top.
// Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?
// https://www.interviewbit.com/problems/stairs/

int Solution::climbStairs(int A) {
    int n1=0, n2=1, sum;
    if(A == n1 || A == n2)
        return A;
    
    for(int i=1;i<=A;i++){
        sum = n1 + n2;
        n1 = n2;
        n2 = sum;
    }
    return n2;
}

