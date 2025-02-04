//Write a program that takes a month number (1-12) as input and displays the number of days using a switch statement.
#include<stdio.h>
int main(){
    int month;
    printf("enter month number");
    scanf("%d",&month);
    switch(month){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
        printf("there are 31 days");
        break;
        case 2:
        case 4:
        case 6:
        case 9:
        case 11:
        printf("there are 30 days");
        break;
    
    default:
        printf("enter number btw 1 and 12");
    }
    return 0;
}