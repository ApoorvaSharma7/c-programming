// Armstrong Number Check:
// Write a function int isArmstrong(int n) that checks whether a given number is an Armstrong number (sum of cubes of digits equals the original number).
#include <stdio.h>
#include <math.h>

// Function to check if a number is an Armstrong number
int isArmstrong(int n) {
    int original = n;
    int sum = 0, digits = 0;

    // Count the number of digits
    int temp = n;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    // Calculate the sum of the digits raised to the power of 'digits'
    temp = n;
    while (temp != 0) {
        int digit = temp % 10;               // Extract the last digit
        sum += pow(digit, digits);           // Add digit^digits to sum
        temp /= 10;                          // Remove the last digit
    }

    // Compare the sum with the original number
    return (sum == original);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isArmstrong(num)) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}
