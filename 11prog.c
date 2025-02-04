//Write a program to check whether a character is a vowel or consonant using a switch statement.
#include <stdio.h>

int main() {
    char ch;
    
    // Input from user
    printf("Enter a character: ");
    scanf("%c", &ch);
    
    // Convert to lowercase for uniformity
    ch = (ch >= 'A' && ch <= 'Z') ? ch + 32 : ch;

    // Switch statement to check for vowels
    switch (ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("%c is a Vowel.\n", ch);
            break;
        default:
            if ((ch >= 'a' && ch <= 'z'))
                printf("%c is a Consonant.\n", ch);
            else
                printf("Invalid input! Please enter an alphabet.\n");
    }

    return 0;
}
   