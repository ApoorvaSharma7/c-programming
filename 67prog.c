// Reverse an Array:
// Write a program to reverse the elements of an array in place.
#include<stdio.h>
int main(){
    int n,i;
    printf("enter number of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("enter %d elements:\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int start =0;
    int end=n-1;
    while(start<end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
    printf("reversed array:\n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}