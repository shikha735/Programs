//https://www.hackerrank.com/challenges/staircase

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int N,i,j;
    scanf("%d",&N);
    for(i = 0;i < N;i++){
        for(j = 0;j < (N-i-1);j++)
            printf(" ");
        for(j = (N-1-i);j < N;j++)
            printf("#");
        printf("\n");
    }
    return 0;
}
