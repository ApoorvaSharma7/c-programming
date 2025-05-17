// Sum of Elements:
// Write a C program to read n numbers into an array and calculate the sum of all elements.

#include<stdio.h>
int main(){
    int n,i,sum=0;
    printf("enter number");
    scanf("%d",&n);
    int arr[n];
    printf("enter %d elements",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);

        sum+=arr[i];
    }
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("sum = %d",sum);
    return 0;
}


