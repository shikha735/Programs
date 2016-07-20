//https://www.hackerrank.com/contests/opc-1/challenges/asmd

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int M,Q,i,ans=0;
    cin >> M;
    cin >> Q;
    char c[Q];
    int a[Q];
    for(i=0;i<Q;i++){
        cin >> c[i];
        cin >> a[i];
    }
    for(i=0;i<Q;i++){
        if(c[i] == 'A'){
                ans = ans + a[i];
                break;
        }
        if(c[i] == 'A'){
                ans = ans + a[i];
                break;
        }
        if(c[i] == 'A'){
                ans = ans + a[i];
                break;
        }
        if(c[i] == 'A'){
                ans = ans + a[i];
                break;
        }
        ans = ans%M;
        cout << ans;
    }
    return 0;
}