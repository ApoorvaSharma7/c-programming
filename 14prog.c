//Write a program that checks whether a given year is a leap year using an if-else statement.
#include <stdio.h>

int main() {
    int year;

    // Taking user input
    printf("Enter a year: ");
    scanf("%d", &year);

    // Leap year conditions
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d is a Leap Year.\n", year);
    } else {
        printf("%d is NOT a Leap Year.\n", year);
    }

    return 0;
}