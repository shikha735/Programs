// https://www.codechef.com/problems/LCOLLIS

#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int T, N, M;
	cin >> T;
	
	while(T--){
	    int A[10] = {0};
		cin >> N >> M;
		string B;
		for(int i=0;i<N;i++){
			cin >> B;
			for(int j=0;j<M;j++)
			    if(B[j] == '1')
			        A[j]++;
		}
		
		int res = 0;
		for(int i=0;i<M;i++){
			if(A[i] != 0)
			    res += A[i]*(A[i]-1)/2;
		}
		cout << res << endl;
	}
	return 0;
}