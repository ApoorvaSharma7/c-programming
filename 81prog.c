// Pointer Arithmetic:
// Create a program to find the maximum element in an array using pointer arithmetic.

#include<stdio.h>
int main(){
    int arr[100],n;
    int *ptr,max;
    printf("enter num of elements ");
    scanf("%d",&n);
    ptr=arr;
    printf("enter %d integers\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",(ptr+i));
    }
    max=*ptr;
    for(int i=1;i<n;i++){
        if(*(ptr+i)>max){
            max=*(ptr+i);
        }
    }
    printf("max element: %d\n",max);
    return 0;
}