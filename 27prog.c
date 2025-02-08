//Reverse a given number using a for loop (take input from the user).
#include <stdio.h>

int main() {
    int num, reversed = 0, remainder;

    // Taking input from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Loop to reverse the number
    for (; num != 0; num /= 10) {
        remainder = num % 10;       // Extract the last digit
        reversed = reversed * 10 + remainder;  // Build the reversed number
    }

    // Printing the reversed number
    printf("Reversed number: %d\n", reversed);

    return 0;
}
/*   reversed = reversed * 10 + remainder;  is vale m jaega agr hm 12345 le rhe h to 0*10+5=5
next time 5*10+4=54
next time 54*10+3=543 and so  on

*/
