// Calculating square root using Newton's method
#include <iostream>
using namespace std;

double squareRoot(int number){
	double prev, sqroot = number/2;
	do{
		prev = sqroot;
		sqroot = (prev + (number/prev))/2;
	}while(prev-sqroot != 0);
	return sqroot;
}

int main() {
	int A;
	cin >> A;
	cout << squareRoot(A) << endl;
	return 0;
}