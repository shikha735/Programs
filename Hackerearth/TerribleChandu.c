//https://www.hackerearth.com/problem/algorithm/terrible-chandu/

#include <stdio.h>
#include <string.h>

int main() {
	int T;
	scanf("%d",&T);
	char S[30];
	int i;
	while(T--){
		scanf("%s",S);
		for(i = strlen(S)-1;i >= 0;i--)
			printf("%c",S[i]);
		printf("\n");
	}
	return 0;
}