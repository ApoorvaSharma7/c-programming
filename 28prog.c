

// Find the factorial of a number using a for loop.


#include<stdio.h>
int main(){
    int n,i,fact=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
    fact*=i;
    }
    printf("%d",fact);
}

