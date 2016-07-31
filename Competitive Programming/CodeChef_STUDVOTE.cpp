// https://www.codechef.com/LTIME38/problems/STUDVOTE/

#include <iostream>
using namespace std;
 
int main() {
	int T, N, K;
	cin >> T;
	while(T--){
		cin >> N >> K;
		int A[N+1];
		int count=0;
		for(int i=1;i<N+1;i++)
			cin >> A[i];
		int res[N+1] = {0};
		for(int i=1;i<N+1;i++){
			res[A[i]]++;
		}
		for(int i=1;i<N+1;i++){
			if(A[i] == i){
				res[i] = 0;
			}
		}
		for(int i=1;i<N+1;i++){
			if(res[i] >= K)
				count++;
		}
		cout << count << endl;
	}
	return 0;
}