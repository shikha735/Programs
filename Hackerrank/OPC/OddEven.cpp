//https://www.hackerrank.com/contests/opc-1/challenges/odd-even

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N;
    int i;
    int app=0;
    int org=0;
    cin >> N;
    int a[N];
    for(i=0;i<N;i++)
        cin >> a[i];
    for(i=0;i<N;i=i+2)
        app+=a[i];
    for(i=1;i<N;i=i+2)
        org+=a[i];
    cout << abs(app-org);
    
    return 0;
}