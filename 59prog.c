// Power of a Number:
// Implement a function double power(double base, int exp) that calculates base^exp using recursion.

#include<stdio.h>
double power(double base,int exp){
    if (exp==0){
        return 1;
    }
    else if(exp>0){
        return base*power(base,exp-1);
    }
    else{
        return 1/power(base,-exp);
    }
}
int main(){
    double base,result;
    int exp;

    printf("enter");
    scanf("%lf",&base);
    scanf("%d",&exp);
    result=power(base,exp);
    printf("%lf",result);
}