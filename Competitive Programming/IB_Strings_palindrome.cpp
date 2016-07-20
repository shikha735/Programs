// https://www.interviewbit.com/courses/programming/topics/strings/problems/palindrome/
// Given a string, determine if it is a palindrome, considering only ALPHANUMERIC characters and ignoring cases.

int Solution::isPalindrome(string A) {
    string str1="";
    for(int i=0;i<A.size();i++){
        if(A.at(i)>='a' && A.at(i) <= 'z'){
            str1 += A.at(i);
        }
        else if(A.at(i)>='A' && A.at(i) <= 'Z'){
            str1 += (A.at(i)+32);
        }
        else if(isdigit(A.at(i))){
            str1 += A.at(i);
        }
    }
    string str2 = str1;
    reverse(str2.begin(),str2.end());
    if(str1 == str2){
        return 1;
    }
    return 0;
}
