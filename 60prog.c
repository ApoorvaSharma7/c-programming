// Swap Two Numbers Using Functions:
// Write a function void swap(int *a, int *b) that swaps two numbers using pointers.
#include<stdio.h>
void swap(int*a,int*b){
    int temp=*a;// Store the value of *a in temp
    *a = *b;         // Assign the value of *b to *a
    *b = temp;       // Assign the value of temp to *b
}
int main(){
    int num1,num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    printf("\nBefore swapping:\n");
    printf("num1 = %d, num2 = %d\n", num1, num2);
    
    swap(&num1, &num2);
    
    printf("\nAfter swapping:\n");
    printf("num1 = %d, num2 = %d\n", num1, num2);
    
    return 0;
}