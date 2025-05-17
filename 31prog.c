//  Print numbers from 1 to 10 using a do-while loop.
#include <stdio.h>

int main() {
    int i = 1; // Initialize the counter

    // Do-while loop to print numbers from 1 to 10
    do {
        printf("%d ", i);
        i++; // Increment counter
    } while (i <= 10); // Condition check

    return 0;
}
