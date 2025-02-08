//Print even numbers from 1 to 20 using a for loop.
#include <stdio.h>

int main() {
    // Loop from 1 to 20
    for (int i = 1; i <= 20; i++) {
        // Check if the number is even
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }
    return 0;
}
