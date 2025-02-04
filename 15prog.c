/** Write a program that simulates a traffic light system using a switch statement:
R for Red → "Stop"
Y for Yellow → "Wait"
G for Green → "Go" **/
#include <stdio.h>

int main() {
    char signal;

    // Taking user input
    printf("Enter traffic light signal (R, Y, G): ");
    scanf(" %c", &signal);  // Space before %c to ignore any newline from previous input

    // Convert to uppercase to handle lowercase inputs
    signal = (signal >= 'a' && signal <= 'z') ? signal - 32 : signal;

    // Switch statement for traffic light system
    switch (signal) {
        case 'R':
            printf("Red Light - STOP!\n");
            break;
        case 'Y':
            printf("Yellow Light - WAIT!\n");
            break;
        case 'G':
            printf("Green Light - GO!\n");
            break;
        default:
            printf("Invalid input! Please enter R, Y, or G.\n");
    }

    return 0;
}
