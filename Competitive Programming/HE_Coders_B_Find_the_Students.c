// https://www.hackerearth.com/problem/algorithm/find-the-students-5/

#include <stdio.h>

int minCal(int stud[], int N) {
	int i, min = stud[0];
	for(i = 1; i < N; i++){
		if(min == 0){
			min = stud[i];
		}
		if((stud[i]!=0) && (min > stud[i])){
			min = stud[i];
		}
	}	
	return min;
}

int check(int a[], int n)
{   
    while(--n>0 && a[n]==0);
    return n!=0;
}

int main(void) {
	int N, count;
	int i, minVal;
	scanf("%d",&N);
	int stud[N];
	for(i = 0; i < N; i++)
		scanf("%d", &stud[i]);
	while(check(stud,N)!=0){
		count = 0;
		minVal = minCal(stud,N);
		for(i = 0; i < N; i++){
			if(stud[i] != 0){
				stud[i] -= minVal;
				count++;
			}
		}
		printf("%d\n",count);
	}
	return 0;
}