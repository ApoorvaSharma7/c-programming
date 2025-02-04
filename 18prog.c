/*Electricity Bill Calculator
Write a program that calculates electricity bills based on the following:
Up to 100 units → ₹5 per unit
101-300 units → ₹7 per unit
Above 300 units → ₹10 per unit*/


#include<stdio.h>
int main(){
    int units,bill;
    printf("enter");
    scanf("%d",&units);
    if(units<=100){
        bill=units*5;
        printf("bill %d",bill);

    }
    else if(units>=101&&units<=300){
        bill=units*7;
        printf("bill %d",bill);
    }
    else if(units>300){
        bill=units*10;
        printf("bill %d",bill);
    }
    else{
        printf("give valid units");
    }
}