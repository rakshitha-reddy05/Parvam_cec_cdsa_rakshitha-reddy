#include<stdio.h>
int main()
{
    int size;
    printf("enter the size of an array:");
    scanf("%d",&size);
    int array[size];
    printf("enter thr array elements:");
    for(int i=0; i<size; i++)
    {
        scanf("%d",&array[i]);
    }
    int sum=0;
    for (int i=0; i<size; i++)
    {
    sum+=array[i];
    }
    printf("the sum of array elements is: %d", sum);
}