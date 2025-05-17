// // Check if a number is prime using a for loop.

// #include <stdio.h>

// int main() {
//     int num, isPrime = 1; 
    
//     printf("Enter a number: ");
//     scanf("%d", &num);

    
//     if (num <= 1) {
//         isPrime = 0;
//     } else {
       
//         for (int i = 2; i * i <= num; i++) {
//             if (num % i == 0) {
//                 isPrime = 0; 
//                 break; 
//             }
//         }
//     }

//     // Output result
//     if (isPrime)
//         printf("%d is a prime number.\n", num);
//     else
//         printf("%d is not a prime number.\n", num);

//     return 0;
// }
#include <stdio.h>

int main() {
    static int i, j;

    for (i = 0, j = 5; i < 3; i++, j -= 2) {
        printf("%d %d ", i, j);
    }

    return 0;
}