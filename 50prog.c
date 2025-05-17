// first repeated digit
#include <stdio.h>

int main() {
    int num, digit, digits[10] = {0}, firstRepeated = -1;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0) {
        digit = num % 10;
        if (++digits[digit] > 1) {  // If digit appears again
            firstRepeated = digit;
            break; // Stop checking further
        }
        num /= 10;
    }

    if (firstRepeated != -1)
        printf("First repeated digit: %d\n", firstRepeated);
    else
        printf("No repeated digits\n");

    return 0;
}
