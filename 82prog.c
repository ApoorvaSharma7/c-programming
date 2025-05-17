// Function and Pointer:
// Write a program that uses a function to reverse an array in-place using pointers.
#include<stdio.h>
void reverse(int *arr, int n){
    int *start=arr;
    int *end=arr+n-1;
    int temp;
    
    while (start<end){
        temp=*start;
        *start=*end;
        *end=temp;
        start++;
        end--;

    }
}
int main(){
    int arr[100], n;
    printf("enter no. of elements ");
    scanf("%d",&n);
    printf("enter %d int :\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",(arr+i));
    }
    reverse(arr,n);
    printf("reversed array\n");
    for(int i=0;i<n;i++){
        printf("%d ",*(arr+i));
    }
    return 0;
}