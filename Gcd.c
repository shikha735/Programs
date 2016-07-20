// Program to find GCD of given numbers
// For 't' test cases
#include <stdio.h>

int main(){
	int a=0, b, x, t;
	scanf("%d",&t);
	while(a?printf("%d\n",a):0,t--){
		scanf("%d%d", &a, &b);
		while(x=a%b,a=b,b=x);
	}
	return 0;
}