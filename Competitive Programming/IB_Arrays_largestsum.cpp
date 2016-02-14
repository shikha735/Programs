// https://www.interviewbit.com/courses/programming/topics/arrays/problems/largestnum/
// Given a list of non negative integers, arrange them such that they form the largest number.

int comp(string one, string two){
    string onetwo = one.append(two);
    string twoone = two.append(one);
    return onetwo.compare(twoone)>0 ? 1:0;
}

string Solution::largestNumber(const vector<int> &A) {
    string result = "";
    int count=0;
    vector<string> str;
    for(int i=0;i<A.size();i++){
        str.push_back(to_string(A[i]));
    }
    for(int i=0;i<A.size();i++){
        if(A[i]==0)
            count++;
    }
    if(count == A.size())
        return "0";
    sort(str.begin(),str.end(),comp);
    
    for(int i=0;i<str.size();i++){
        result += str[i];
    }
    return result;
}
