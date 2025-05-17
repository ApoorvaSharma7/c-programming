// Calculate the sum of digits of a given number using a do-while loop.
#include<stdio.h>
int main(){
    int n, sum=0, remainder;
    scanf("%d",&n);
    do{
        remainder=n%10;
        sum+=remainder;
        n/=10;
    }
    while(n!=0);
        printf("%d",sum);

}