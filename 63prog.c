// Palindrome Check:
// Write a function int isPalindrome(int num) that checks if a number is a palindrome. Return 1 for palindrome and 0 otherwise.

#include<stdio.h>
int ispalindrome(int num){
    int original=num;
    int reversed=0,digit;

    while (num>0){
        digit=num%10;
        reversed=reversed*10+digit;
        num/=10;
    }
    return(original==reversed)?1:0;
}
int main(){
    int num;
    printf("enter number");
    scanf("%d",&num);
    if(ispalindrome(num))
        printf("%d is palindrome\n",num);
    else
        printf("%d is not palindrome\n",num);
    return 0;
}
