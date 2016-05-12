// https://www.codechef.com/MAY16/problems/FORESTGA
#include <iostream>
using namespace std;

int main() {
	unsigned long long int N;
	unsigned long long int W, L;
	bool flag = true;
	scanf("%lld %lld %lld", &N, &W, &L);
	unsigned long long int H[N], R[N];
	for(int i=0;i<N;i++){
		scanf("%lld %lld",&H[i], &R[i]);
	}
	unsigned long long int ht = 0;
	unsigned long long int j=0;
	while(flag){
	    ht = 0;
		for(int i=0;i<N;i++){
			if(H[i] >= L)
				ht += H[i];
		}
		if(ht >= W){
			printf("%lld",j);
			flag = false;
		}
		for(int i=0;i<N;i++)
			H[i] += R[i];
		j++;
	}
	return 0;
}