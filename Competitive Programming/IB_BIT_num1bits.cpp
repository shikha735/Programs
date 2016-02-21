// https://www.interviewbit.com/courses/programming/topics/bit-manipulation/problems/num1bits/
// Write a function that takes an unsigned integer and returns the number of 1 bits it has.
#include <iostream>
using namespace std;

long numbits(long i){
	int count = 0;
	while(i != 0){
		i &= i-1;
		count++;
	}
	return count;
}

int main() {
	long i;
	cin >> i;
	cout << numbits(i);
	return 0;
}