#include<stdio.h>
int main()
{
    int num;
    printf("enter a number to get the tables:");
    scanf("%d", &num);
    for(int i=1;i<=10;i++)
    {
        printf("%d x %d: %d\n",num, i, i*num);
    }
}