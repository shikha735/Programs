#include <iostream>
#include <cassert>
using namespace std;

int main() {
	long long l, r;
	long long k;
	int T;
	cin >> T;
	while(T--){
		cin >> l >> r >> k;
		long long sum = 0;
		k--;
		for(long long i=l;i<=r;i++){
			if((1 << k)&i){
				sum += i;
			}
		}
		cout << sum << endl;
	}
	return 0;
}
 