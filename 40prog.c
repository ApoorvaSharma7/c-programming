// Generate the Fibonacci series up to N terms using a do-while loop.
#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next, count = 1;

    // Input from the user
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    // Special case for n = 1
    if (n == 1) {
        printf("%d\n", first);
        return 0;
    }

    // Print the first two terms
    printf("%d %d ", first, second);

    // Do-while loop to generate Fibonacci sequence
    do {
        next = first + second; // Compute the next term
        printf("%d ", next);   // Print the next term

        first = second; // Update first
        second = next;  // Update second
        count++;        // Increment count
    } while (count < n - 1); // Continue until we print n terms

    printf("\n");

    return 0;
}
