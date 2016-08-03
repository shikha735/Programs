// https://www.interviewbit.com/problems/reverse-the-string/
/*
Given an input string, reverse the string word by word.

Example:

Given s = "the sky is blue",

return "blue is sky the".
*/

#include <sstream>
void Solution::reverseWords(string &A) {
    string res = "";
    string buf; // Have a buffer string
    stringstream ss(A);
    vector<string> tokens; // Create vector to hold our words

    while (ss >> buf)
        tokens.push_back(buf);
    reverse(tokens.begin(),tokens.end());
    for(int i = 0;i < tokens.size()-1;i++){
        res += tokens.at(i) + ' ';
    }
    res += tokens.back();
    A = res;
}
