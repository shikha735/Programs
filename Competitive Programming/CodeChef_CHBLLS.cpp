// https://www.codechef.com/MAY16/problems/CHBLLS
#include <iostream>
#include <cstdio>
using namespace std;
 
int main() {
	int diff;
	cout << 1 << '\n';
	cout << 3 << " " << 1 << " " << 1 << " " << 2 << '\n';
	cout << 3 << " " << 3 << " " << 3 << " " << 4 << '\n';
	fflush(stdout);
	cin >> diff;
	if(diff == 0){
		cout << 2 << endl;
		cout << 5;
	}
	else if(diff == 1){
		cout << 2 << endl;
		cout << 2;
	}
	else if(diff == -1){
		cout << 2 << endl;
		cout << 4;
	}
	else if(diff == 2){
		cout << 2 << endl;
		cout << 1;
	}
	else{
		cout << 2 << endl;
		cout << 3;
	}
	return 0;
} 