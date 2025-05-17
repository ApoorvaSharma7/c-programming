// Dynamic Memory Allocation:
// Write a program to dynamically allocate memory for n integers using malloc(), take input, and print the average.

#include<stdio.h>
#include<stdlib.h>
int main(){
    int *arr;
    int n;
    float sum = 0;
    printf("enter the number of elements: ");
    scanf("%d",&n);
    arr=(int *)malloc(n *sizeof(int));
    if(arr=NULL){
        printf("memory allocation failed\n");
        return 1;
    }
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // or *(arr + i)
        sum += arr[i];         // accumulate the sum
    }

    float avg = sum / n;
    printf("Average = %.2f\n", avg);

    // Free allocated memory
    free(arr);

    return 0;
}