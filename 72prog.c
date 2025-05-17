// Merge Two Arrays:
// Write a program to merge two arrays into a third array.
#include<stdio.h>
int main(){
    int n1,n2, i,k;

    printf("Enter the number of elements in first array: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter %d elements of first array:\n", n1);
    for(i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the number of elements in second array: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter %d elements of second array:\n", n2);
    for(i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    int merged[n1+n2];
    for(i=0;i<n1;i++){
        merged[i]=arr1[i];
    }
    for(k=0;k<n2;k++){
        merged[i++]=arr2[k];
    }
    printf("merged array\n");
    for(i=0;i<n1+n2;i++){
        printf("%d ",merged[i]);
    }
    return 0;
}