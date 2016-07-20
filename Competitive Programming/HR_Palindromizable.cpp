// https://www.hackerrank.com/contests/hyderabads-best-coder-practice-set-2/challenges/palindromizable

#include <iostream>
#include <cstring>
using namespace std;

void isPalin(int a[]){
    int index=0;
    for(int i=0;((i<26)&&(index<=1));i++){
        if(a[i]%2 != 0)
            index++;
    }
    if(index > 1)
        cout << "False" << endl;
    else
    	cout << "True" << endl;
}

int main() {
    int N;
    int checker;
    string str;
    int a[26];
    cin >> N;
    while(N--){
        cin >> str;
        memset(a, 0, sizeof(a));
        for(int i=0;i<str.size();i++){
            checker = str[i]-'a';
            a[checker]++;
        }
        isPalin(a);
    }
    return 0;
}
