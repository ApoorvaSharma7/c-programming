// Print Fibonacci series up to N terms using a for loop (N is user input).


#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next;

    // Taking user input
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (int i = 0; i < n; i++) {
        printf("%d ", first); // Print the current term
        next = first + second; // Calculate the next term
        first = second; // Shift first to second
        second = next; // Shift second to next
    }

    printf("\n");
    return 0;
}
