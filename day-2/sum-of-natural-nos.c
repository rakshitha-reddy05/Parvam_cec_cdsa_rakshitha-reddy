#include<stdio.h>
int main()
{
    int num, sum=0;
    printf("enter a positive number:");
    scanf("%d", &num);
    for (int i=0; i<=num; i++)
    {
        sum=sum+i;
    }
    printf("the sum of natural number from 0 to %d is: %d", num, sum);
}