//https://www.hackerrank.com/challenges/diagonal-difference

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int N, i, j, sum1 = 0, sum2 = 0, diff = 0;
    scanf("%d",&N);
    int arr[N][N];
    for(i = 0;i < N;i++)
        for(j = 0;j < N;j++)
            scanf("%d",&arr[i][j]);
       
    // Sum of first diagonal elements
        
    for(i = 0;i < N;i++){
        sum1 += arr[i][i];
    }
    // Sum of second diagonal elements
    for(i = 0;i < N;i++)
        sum2 += arr[i][N-1-i];
    
    diff = abs(sum1 - sum2);
    printf("%d",diff);
    return 0;
}