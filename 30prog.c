// Check if a number is prime using a for loop.

#include <stdio.h>

int main() {
    int num, isPrime = 1; // Assume the number is prime

    // Taking user input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Edge case: 0 and 1 are not prime numbers
    if (num <= 1) {
        isPrime = 0;
    } else {
        // Checking divisibility from 2 to sqrt(num) (optimized)
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0; // Not a prime number
                break; // Exit loop early if a divisor is found
            }
        }
    }

    // Output result
    if (isPrime)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;
}
