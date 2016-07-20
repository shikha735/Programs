//https://www.hackerrank.com/challenges/plus-minus

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int N, i;
    float pos = 0, neg = 0, zer = 0;
    scanf("%d",&N);
    int arr[N];
    for(i = 0;i < N;i++)
        scanf("%d",&arr[i]);
    for(i = 0;i < N;i++){
        if(arr[i] == 0)
            zer++;
        else if(arr[i] > 0)
            pos++;
        else if(arr[i] < 0)
            neg++;
    }
    printf("%f\n%f\n%f",(pos/N),(neg/N),(zer/N));
    return 0;
}
