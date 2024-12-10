#include<stdio.h>
int main(){
    int size;
    printf("enter the size of array:");
    scanf("%d", &size);
    int arr[size];
    printf("enter the elements of an array:");
    for(int i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }
    int target=0,count=0;
    printf("enter the target element which need to found :");
    scanf("%d",&target);
    for(int i=0; i<size; i++){
       if(arr[i]==target){
        printf("The target element %d is found at index:%d",target,i);
        count++;
       }
    }
    printf("the target element %d is repeated %d times", target,count);
}