//Write a menu-driven calculator program using a switch statement that performs addition, subtraction, multiplication, and division.
#include <stdio.h>

int main() {
    int choice;
    float num1, num2, result;

    while (1) { // Infinite loop to keep the menu running until the user exits
        // Displaying Menu
        printf("\n--- Simple Calculator ---\n");
        printf("1. Addition (+)\n");
        printf("2. Subtraction (-)\n");
        printf("3. Multiplication (*)\n");
        printf("4. Division (/)\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // If user chooses to exit
        if (choice == 5) {
            printf("Exiting the calculator. Thank you!\n");
            break;
        }

        // Taking input numbers
        printf("Enter two numbers: ");
        scanf("%f %f", &num1, &num2);

        // Switch case to perform operations
        switch (choice) {
            case 1:
                result = num1 + num2;
                printf("Result: %.2f + %.2f = %.2f\n", num1, num2, result);
                break;
            case 2:
                result = num1 - num2;
                printf("Result: %.2f - %.2f = %.2f\n", num1, num2, result);
                break;
            case 3:
                result = num1 * num2;
                printf("Result: %.2f * %.2f = %.2f\n", num1, num2, result);
                break;
            case 4:
                if (num2 == 0)
                    printf("Error! Division by zero is not allowed.\n");
                else {
                    result = num1 / num2;
                    printf("Result: %.2f / %.2f = %.2f\n", num1, num2, result);
                }
                break;
            default:
                printf("Invalid choice! Please enter a number between 1 and 5.\n");
        }
    }

    return 0;
}
