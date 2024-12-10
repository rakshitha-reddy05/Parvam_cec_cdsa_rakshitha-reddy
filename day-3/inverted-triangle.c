#include<stdio.h>
int main()
{
    int column;
    printf("enter the number of column:");
    scanf("%d",&column);
    for(int i=column ; i>=1 ; i--)
    {
        for(int j=0 ; j<i ;  j++)
        {
            printf("*\t");
        }
        printf("\n");
    }
}
