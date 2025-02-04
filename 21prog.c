/*Bank Account Menu
Write a menu-driven program using a switch statement where the user can:
1 → Check balance
2 → Deposit money
3 → Withdraw money
4 → Exit */
#include <stdio.h>

int main() {
    int choice;
    double balance = 1000.0, amount;
    
    do {
        printf("\nBank Account Menu:\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                printf("Your current balance is: $%.2f\n", balance);
                break;
            case 2:
                printf("Enter amount to deposit: ");
                scanf("%lf", &amount);
                if (amount > 0) {
                    balance += amount;
                    printf("$%.2f deposited successfully!\n", amount);
                } else {
                    printf("Invalid deposit amount!\n");
                }
                break;
            case 3:
                printf("Enter amount to withdraw: ");
                scanf("%lf", &amount);
                if (amount > 0 && amount <= balance) {
                    balance -= amount;
                    printf("$%.2f withdrawn successfully!\n", amount);
                } else {
                    printf("Invalid withdrawal amount or insufficient funds!\n");
                }
                break;
            case 4:
                printf("Exiting program. Thank you!\n");
                break;
            default:
                printf("Invalid choice! Please enter a number between 1 and 4.\n");
        }
    } while (choice != 4);
    
    return 0;
}