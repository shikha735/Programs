#include<stdio.h>
 
int countnobit(int n)
{
    int count = 0;
    while (n)
    {
      n &= (n-1) ;
      count++;
    }
    return count;
}
 
int main()
{
    int i;
    printf("enter the number");
    scanf("%d",&i);
    printf("%d", countnobit(i));
    return 0;
}