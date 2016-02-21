// https://www.interviewbit.com/courses/programming/topics/binary-search/problems/sqrt/
// Implement int sqrt(int x).
// Compute and return the square root of x.
// If x is not a perfect square, return floor(sqrt(x))

#include <iostream>
using namespace std;

int findRoot(int A){
	if(A==0||A==1)
		return A;
	
	int start = 1, end = A, mid, ans;
	
	while(start <= end){
		mid = (start+end)/2;
		if(mid*mid == A) // perfect square
			return mid;
		else if(mid*mid < A){
			start = mid+1;
			ans = mid;
		}
		else
			end = mid - 1;
	}
	return ans;
}

int main() {
	int A;
	cin >> A;
	cout << findRoot(A);
	return 0;
}