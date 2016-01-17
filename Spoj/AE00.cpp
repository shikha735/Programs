#include <iostream>
#include <cmath>
using namespace std;

int fac(int n){
	int count = 0;
	for(int i = 1;i <= sqrt(n);i++)
		if(n % i == 0)
			count++;
	return count;
}

int main() {
	int N, sum = 0;
	cin >> N;
	for(int i = 1;i <= N;i++)
		sum += fac(i);
	cout << sum;
	return 0;
}