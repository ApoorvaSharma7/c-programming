// Input 5 elements in an array using a pointer and print them using pointer arithmetic.

#include<stdio.h>
int main(){
    int arr[5];
    int *ptr=arr;
    for (int i = 0; i < 5; i++) {
        scanf("%d", ptr + i);  // Equivalent to &arr[i]
    }
    printf("The elements are:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(ptr + i));  // Equivalent to arr[i]
    }
}