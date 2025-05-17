// Print even numbers from 2 to 20 using a do-while loop
#include <stdio.h>

int main() {
    int i = 2; // Initialize with the first even number

    // Do-while loop to print even numbers from 2 to 20
    do {
        printf("%d ", i);
        i += 2; // Increment by 2 to get the next even number
    } while (i <= 20); // Condition check

    return 0;
}
