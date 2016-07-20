// https://www.hackerrank.com/contests/hyderabads-best-coder-practice-set-2/challenges/tipsy-guy

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int T, N,base,height;
	float distance;
	cin >> T;
	while(T--){
		cin >> N;
		char dir[N];
		int arr[N];
		base=0,height=0;
		for(int i=0;i<N;i++){
			cin >> dir[i] >> arr[i];
		}
		for(int i=0;i<N;i++){
			if(dir[i] == 'N')
				height += arr[i];
			else if(dir[i] == 'S')
				height -= arr[i];
			else if(dir[i] == 'E')
				base += arr[i];
			else if(dir[i] == 'W')
				base -= arr[i];
		}
		distance = sqrt((pow(height,2)+pow(base,2)));
		printf("%.2f\n",distance);
	}
	return 0;
}