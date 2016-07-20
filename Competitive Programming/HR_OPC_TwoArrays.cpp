//https://www.hackerrank.com/contests/opc-1/challenges/two-arrays-1-1

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void sort(int a[],int n);
int main() {
    int n,i,S=0;
    cin >> n;
    int A[n],B[n];
    for(i=0;i<n;i++){
        cin >> A[i];
    }
    for(i=0;i<n;i++){
        cin >> B[i];
    }
    sort(A,n);
    sort(B,n);
    for(i=0;i<n;i++)
        S+= (A[i]*B[n-1-i]);
    cout << S;
}
void sort(int a[],int n){
    int i,j,t;
    for(i=1;i<n;i++){
        for(j=0;j<n-i;j++){
            if(a[j]>a[j+1]){
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
}