// https://www.interviewbit.com/courses/programming/topics/math/problems/excel1/

int Solution::titleToNumber(string A) {
    int res = 0, k,len=A.size();
    for(int i = 0;i < len;i++){
        k = A.at(i)-64;
        res += pow(26,len -1 - i)*k;
    }
    return res;
}
