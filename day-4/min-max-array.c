#include<stdio.h>
int main()
{
    int size;
    printf("enter the number of elements:");
    scanf("%d", &size);
    int arrofnum[size];
    printf("enter %d elements into an array:", size);
    for(int i=0; i<size; i++)
    {
        scanf("%d", &arrofnum[i]);
    }
    int max, min;
    max=min=arrofnum[0];
    for(int i=0; i<size; i++)
    {
        if (arrofnum[i] > max)
        {
            max = arrofnum[i];
        }
        if(arrofnum[i] < min)
        {
            min = arrofnum[i];
        }
    }
    printf("the largest element in the array is: %d\n", max);
    printf("the smallest element in the array is: %d", min);
}