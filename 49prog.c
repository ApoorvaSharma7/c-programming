// repeateddigit

#include <stdio.h>
int main() {
    int num, originalNum, digit;
    int digits[10] = {0}; // Array to track digit occurrences
    int isRepeated = 0;   // Flag to check repetition

    // Input
    printf("Enter a number: ");
    scanf("%d", &num);
    originalNum = num; // Store the original number

    // Check for repeated digits
    while (num > 0) {
        digit = num % 10; // Extract last digit
        digits[digit]++;  // Increment count

        if (digits[digit] > 1) {
            isRepeated = 1; // Mark repetition
        }
        num /= 10; // Remove last digit
    }

    // Print results
    if (isRepeated) {
        printf("Repeated digits found in %d: ", originalNum);
        for (int i = 0; i < 10; i++) {
            if (digits[i] > 1) {
                printf("%d ", i);
            }
        }
        printf("\n");
    } else {
        printf("No repeated digits in %d\n", originalNum);
    }

    return 0;
}


        
   