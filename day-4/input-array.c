#include<stdio.h>
int main()
{
    int size;
    printf("enter the size of an array:");
    scanf("%d", &size);
    int array[size];
    printf("enter the elements of an array:",size);
    for(int i=0; i<size; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("the array elements are as follows:\n");
    for(int i=0; i<size; i++)
    {
        printf("the element in index array[%d]:%d\n",i,array[i]);
    }
}
