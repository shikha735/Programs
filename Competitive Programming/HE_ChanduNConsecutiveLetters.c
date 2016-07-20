//https://www.hackerearth.com/problem/algorithm/chandu-and-consecutive-letters/

#include <stdio.h>
#include <string.h>

int main() {
	int T;
	int i;
	scanf("%d", &T);
	char S[30];
	while(T--) {
		scanf("%s",&S);
		printf("%c",S[0]);
		for(i = 0; i < strlen(S)-1;i++){
			if(S[i] != S[i+1]){
				printf("%c",S[i+1]);
			}
		}
		printf("\n");
	}
}