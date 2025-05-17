// Array Sorting:
// Write a program to sort an array using the bubble sort algorithm.

#include<stdio.h>
int main(){
    int n,i,j,temp;
    printf("enter number of elements\n");
    scanf("%d",&n);
    int arr[n];
    printf("enter %d elements\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("sorted array:\n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}