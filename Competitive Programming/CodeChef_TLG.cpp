#include <iostream>
using namespace std;

// https://www.codechef.com/problems/TLG

int main(){
	int N,x=0,y=0,winner=0,lead=0;
	cin >> N;
	int S, T, L;
	for(int i = 0;i < N; i++){
		cin >> S >> T;
		x += S;
		y += T;
		if((x-y)>lead){
			lead = x-y;
			winner = 1;
		}
		else if((y-x)>lead){
			lead = y-x;
			winner = 2;
		}
	}

	cout << winner << " " << lead;
	return 0;
}