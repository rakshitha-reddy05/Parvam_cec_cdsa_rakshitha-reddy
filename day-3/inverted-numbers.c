#include<stdio.h>
int main()
{
    int row;
    printf("enter the number of row:");
    scanf("%d",&row);
    for(int i=row ; i >= 1 ; i--)
    {
        for(int j=0 ; j < i;  j++)
        {
            printf("%d\t",i);
        }
        printf("\n");
    }
}