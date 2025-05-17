// // Count Digits in a Number: while loop

#include <stdio.h>

int main() {
    int num, count = 0;

    // Input from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0) {
        count = 1;  // If number is 0, it has 1 digit
    } else {
        while (num != 0) {
            num /= 10;   // Remove last digit
            count++;     // Increase count
        }
    }

    printf("Number of digits: %d\n", count);
    return 0;
}
