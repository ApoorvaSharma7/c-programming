// Fibonacci Series (Recursion):
// Write a program with a recursive function int fibonacci(int n) to print the first n terms of the Fibonacci series.

#include<stdio.h>
int fibonacci(int n){
    if (n<=1){
        return 1;
    }
    return fibonacci(n-1)+fibonacci(n-2);
}
int main() {
    int n;

    // Taking the number of terms as input
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");
    
    // Printing the first n terms of the series
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }

    printf("\n");
    return 0;
}