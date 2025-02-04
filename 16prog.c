//Write a program that takes a single-digit number as input and prints its word equivalent using a switch statement. Example: 5 → "Five".
#include<stdio.h>
int main(){
    int num;
    printf("enter num");
    scanf("%d",&num);
    switch(num){
        case 1:
        printf("one");
        break;
        case 2:
        printf("two");
        break;
        case 3:
        printf("three");
        break;
        case 4:
        printf("four");
        break;
        case 5:
        printf("five");
        break;
        case 6:
        printf("six");
        break;
        case 7:
        printf("seven");
        break;
        case 8:
        printf("eight");
        break;
        case 9:
        printf("nine");
        break;
        case 0:
        printf("zero");
        break;
        default:
        printf("enter single digit number please");
        break;
    }
}