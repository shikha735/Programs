// for one test case
#include <stdio.h>

int main(){
	int a=0, b, x;
	scanf("%d%d", &a, &b);
	while(x=a%b,a=b,b=x);
	a?printf("%d\n",a):0;
	return 0;
}