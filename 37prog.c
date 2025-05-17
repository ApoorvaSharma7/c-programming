// Check if a given number is a palindrome using a do-while loop.
#include <stdio.h>

int main() {
    int num, original, reversed = 0, remainder;

    // Input from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    original = num; // Store the original number for comparison

    // Do-while loop to reverse the number
    do {
        remainder = num % 10;             // Get the last digit
        reversed = reversed * 10 + remainder; // Append digit to reversed number
        num /= 10;                        // Remove last digit from num
    } while (num != 0); // Continue until num becomes 0

    // Check if the original number and reversed number are the same
    if (original == reversed)
        printf("%d is a Palindrome.\n", original);
    else
        printf("%d is not a Palindrome.\n", original);

    return 0;
}
