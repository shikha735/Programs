// http://www.geeksforgeeks.org/the-ubiquitous-binary-search-set-1/
// Given a sorted array with possible duplicate elements. Find number of occurrences of input ‘key’ in log N time.

#include <iostream>
using namespace std;

int getRightPosition(int A[], int l,int r,int key){
	int m;
	while(r-l > 1){
		m = l + (r-l)/2;
		if(A[m] <= key)
			l = m;
		else 
			r = m;
	}
	return l;
}

int getLeftPosition(int A[], int l,int r,int key){
	int m;
	while(r-l > 1){
		m = l + (r-l)/2;
		if(A[m] >= key)
			r = m;
		else 
			l = m;
	}
	return r;
}

int countOccurrences(int A[], int n, int key){
	int l = getLeftPosition(A,-1,n-1,key);
	int r = getRightPosition(A,0,n,key);
	return (A[l] == key && A[r] == key) ? (r - l + 1) : 0;
}
int main() {
	int A[] = {1,4,5,5,5,5,5,6,7,8};
	cout << countOccurrences(A,10,5);
	return 0;
}