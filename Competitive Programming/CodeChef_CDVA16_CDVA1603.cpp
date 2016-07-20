//https://www.codechef.com/CDVA16/problems/CDVA1603

#include <iostream>
using namespace std;

int main() {
	int T,N,Q,count;
	cin >> T;
	while(T--){
		cin >> N;
		float arr[N];
		cin >> Q;
		float query[Q];
		for(int i=0;i<N;i++){
			cin >> arr[i];
		}
		for(int i=0;i<Q;i++){
			cin >> query[i];
		}
		
		for(int i=0;i<Q;i++){
			count = 0;
			for(int j=0;j<N;j++){
				if(arr[j]>query[i]){
					count++;
				}
			}
			cout << count << endl;
		}
	}
	return 0;
}