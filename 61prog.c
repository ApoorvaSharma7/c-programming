// LCM and GCD using Functions:
// Create two functions:

// int gcd(int a, int b) → returns the greatest common divisor.
// int lcm(int a, int b) → returns the least common multiple using GCD.
#include<stdio.h>
int gcd(int a ,int b){
    while(b!=0){
        int temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}
int lcm(int a,int b){
    return(a*b)/gcd(a,b);
}
int main(){
    int num1,num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("\nGCD of %d and %d = %d\n", num1, num2, gcd(num1, num2));
    printf("LCM of %d and %d = %d\n", num1, num2, lcm(num1, num2));

    return 0;

}










// Function for GCD (Greatest Common Divisor):

// c
// Copy code
// int gcd(int a, int b)
// 
// Swap a and b repeatedly until b becomes 0.
// The GCD is the value of a when b reaches 0.

// Example of Euclidean Algorithm:
// matlab
// Copy code
// GCD of 48 and 18:  
// 48 % 18 = 12  
// 18 % 12 = 6  
// 12 % 6 = 0 → GCD = 6  

// Function for LCM (Least Common Multiple):

// c
// Copy code
// int lcm(int a, int b)

 
// The LCM is calculated by multiplying the two numbers and dividing by their GCD.
// Main Function:

// Reads two numbers using scanf().
// Calls the gcd() and lcm() functions.
// Displays the GCD and LCM.
