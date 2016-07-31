// https://www.codechef.com/CYPH2016/problems/LOSTPW/

#include <iostream>
using namespace std;
 
bool isUnique(string str){
    int val;
    bool char_set[27] = {false};
    for(int i=0;i<str.size();i++){
        val = str.at(i) - 'a';
        if(char_set[val]) return false;
        char_set[val] = true;
    }
    return true;
}
 
bool isAlpNum(string str){
    for(int i=0;i<str.size();i++){
        if(!isalnum(str.at(i))) return false;
    }
    return true;
}
 
int main() {
	string inp;
    while (getline(cin, inp) && !inp.empty()){
    if(isAlpNum(inp) && isUnique(inp)){
        cout << "Valid" << endl;
        return 0;
    }
    else
        cout << "Invalid" << endl;
    }
	return 0;
}