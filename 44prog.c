// Factorial of a Number using while loop
#include<stdio.h>
int main(){
    int a,i=1,b=1;
    scanf("%d",&a);
    while(i <=a){
        b*=i;
        
        i++;
    }
    printf("%d",b);
}