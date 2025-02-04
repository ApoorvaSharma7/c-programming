/*Rock, Paper, Scissors Game
Write a program that simulates a Rock, Paper, Scissors game using switch statements.*/


#include <stdio.h>
#include <stdlib.h>//helps to choose random value
#include <time.h>// Allows seeding the random number generator with time(0).

int main() {
    int userChoice, computerChoice;

    // Seed the random number generator    //time(0) provides a unique seed based on the current time.
    srand(time(0));//srand() ensures that rand() generates different random values each time the program runs.
    
    // Display choices
    printf("Rock, Paper, Scissors Game\n");
    printf("Enter your choice:\n");
    printf("1. Rock\n2. Paper\n3. Scissors\n");
    printf("Your choice: ");
    scanf("%d", &userChoice);

    // Validate user input
    if (userChoice < 1 || userChoice > 3) {
        printf("Invalid choice! Please select 1, 2, or 3.\n");
        return 1;
    }

    // Generate computer choice (1 = Rock, 2 = Paper, 3 = Scissors)
    computerChoice = (rand() % 3) + 1;//rand() % 3 generates a random number in the range 0 to 2.+1 shifts the range 1 to 3.

    // Display computer's choice
    printf("Computer chose: ");
    switch (computerChoice) {
        case 1: printf("Rock\n"); break;
        case 2: printf("Paper\n"); break;
        case 3: printf("Scissors\n"); break;
    }

    // Determine the winner
    switch (userChoice) {
        case 1: // Rock
            switch (computerChoice) {
                case 1: printf("It's a tie!\n"); break;
                case 2: printf("Computer wins! Paper covers Rock.\n"); break;
                case 3: printf("You win! Rock crushes Scissors.\n"); break;
            }
            break;
        case 2: // Paper
            switch (computerChoice) {
                case 1: printf("You win! Paper covers Rock.\n"); break;
                case 2: printf("It's a tie!\n"); break;
                case 3: printf("Computer wins! Scissors cut Paper.\n"); break;
            }
            break;
        case 3: // Scissors
            switch (computerChoice) {
                case 1: printf("Computer wins! Rock crushes Scissors.\n"); break;
                case 2: printf("You win! Scissors cut Paper.\n"); break;
                case 3: printf("It's a tie!\n"); break;
            }
            break;
    }

    return 0;
}

