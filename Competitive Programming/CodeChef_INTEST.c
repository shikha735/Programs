#include <stdio.h>
 
int main(void) {
	int n, k, count = 0;
	long t;
	scanf("%d%d",&n,&k);
	while(n > 0){
		scanf("%ld",&t);
		if(t%k == 0){
			count++;
		}
		n--;
	}
	printf("%d",count);
	return 0;
} 