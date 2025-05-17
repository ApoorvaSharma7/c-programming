// Print the reverse of a given number using a do-while loop.
#include <stdio.h>

int main() {
    int num, reversed = 0, remainder;

    // Input from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Do-while loop to reverse the number
    do {
        remainder = num % 10;             // Get the last digit
        reversed = reversed * 10 + remainder; // Append digit to reversed number
        num /= 10;                        // Remove last digit from num
    } while (num != 0); // Continue until num becomes 0

    // Print the reversed number
    printf("Reversed number: %d\n", reversed);

    return 0;
}
