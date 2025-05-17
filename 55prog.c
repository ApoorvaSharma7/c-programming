// Sum of Digits:
// Write a function int sumOfDigits(int n) that takes an integer and returns the sum of its digits.
#include<stdio.h>
int sumofdigits(int n){
    int sum =0;
    if (n<0){
        return n=-n;
    }
    while(n!=0){
        sum+=n%10;
        n=n/10;
    }
    return sum;
}
int main(){
    int num ;
    scanf("%d",&num);
    int result=sumofdigits(num);
    printf("%d",result);
    return 0;
}