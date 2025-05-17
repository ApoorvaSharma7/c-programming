// Array with Pointers:
// Write a program to input 5 integers into an array and print them using pointer notation instead of array indexing.

#include<stdio.h>
int main(){
    int arr[5];
    int *ptr;
    ptr=arr;
    printf("enter 5 int \n");
    for(int i=0;i<5;i++){
        scanf("%d",(ptr+i));
    }
    printf("your entered\n");
    for(int i=0;i<5;i++){
        printf("%d ",*(ptr+i));
    }
    return 0;
}