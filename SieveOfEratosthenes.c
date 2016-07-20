#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

void markMultiples(bool arr[], int k, int n) {
	int i, num;
	for(i = 2, num = k*i;num <= n; ++i,num = k*i) {
		arr[num - 1] = 1;
	}
}

void seiveOfEratosthenes(int n) {
	int i;
	if(n >= 2) {
		bool arr[n];
		memset(arr, 0, sizeof(arr));
		
		for(i = 1;i*i < n; i++) {
			if(arr[i] == 0) {
				printf("%d ",i+1);
				markMultiples(arr, i+1, n);
			}	
		}
	}
}

int main() {
	int n;
	printf("Enter the number");
	scanf("%d",&n);
	printf("The prime numbers below %d are: \n",n);
	seiveOfEratosthenes(n);
	return 0;
}