// https://www.interviewbit.com/courses/programming/topics/strings/problems/roman2int/
// Given a roman numeral, convert it to an integer.

int rToInt(char c){
    switch(c){
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
    }
}

int Solution::romanToInt(string A) {
    int result = 0;
    int prev = 0, curr = 0, sign = 1;
    char c;
    for(int i=A.size()-1;i>=0;i--){
        c = A.at(i);
        curr = rToInt(c);
        sign = curr < prev ? -1:1;
        prev = curr;
        result += curr * sign;
    }
    return result;
}
