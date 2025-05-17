// Count Even and Odd Numbers:
// Write a program to count the number of even and odd numbers in an array.
#include<stdio.h>
int main(){
    int n,i,count=0;
    printf("enter number of elements \n");
    scanf("%d",&n);
    int arr[n];
    printf("enter %d elements\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(arr[i]%2==0){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
