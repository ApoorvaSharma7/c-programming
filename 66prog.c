// Find Maximum and Minimum:
// Write a program to find the maximum and minimum element in an array.

#include<stdio.h>
int main(){
    int n,i;
    printf("enter num of elements");
    scanf("%d",&n);
    int arr[n];
    printf("enter %d elements\n",n);
    for(i=0; i<n ;i++){
        scanf("%d",&arr[i]);
    }
    int max = arr[0];
    int min = arr[0];
    for(i=1; i<n; i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min =arr[i];
        }
    }
    printf("max= %d\n",max);
    printf("min= %d\n",min);
    return 0;
    
}