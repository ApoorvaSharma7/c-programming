//Write a program that takes three sides of a triangle as input and determines whether it is an equilateral, isosceles, or scalene triangle using if-else.
#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter 3 sides for a triangle");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b==c){
        printf("equilateral");

    }
    else if(a==b || b==c || c==a){
        printf("isosceles");
    }
    else{
        printf("scalene");
    }
    return 0;
}