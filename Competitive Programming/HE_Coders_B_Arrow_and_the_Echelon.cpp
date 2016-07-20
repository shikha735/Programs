// https://www.hackerearth.com/problem/algorithm/arrow-and-the-echelon-3/

#include <iostream>
using namespace std;

int main() {
	int T, temp, n, i;
	string str;
	cin >> T;
	while(T--){
		cin >> n;
		
			int c = 5*(2*n%3);
			if(c > n){
				cout << "-1\n";
			} else {
				for(int j = 0; j < n-c; j++ )
					cout << 5;
				for(int j = 0; j < c; j++)
					cout << 3;
				
				cout << endl;
			}
		
	}
	return 0;
}