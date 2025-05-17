// Power of a Number:
// Implement a function double power(double base, int exp) that calculates base^exp using recursion.
#include<stdio.h>
double power(double base,int exp){
    if (exp==0){
        return 1;
    }
    else if (exp >0){
        return base*power(base,exp-1);
    }
    else{
        return 1/power(base,-exp);
    }
}
int main() {
    double base;
    int exp;
    
    printf("Enter the base: ");
    scanf("%lf", &base);  // Read base (double)
    
    printf("Enter the exponent: ");
    scanf("%d", &exp);    // Read exponent (integer)
    
    double result = power(base, exp);
    
    printf("%.2lf^%d = %.6lf\n", base, exp, result);
    
    return 0;
}