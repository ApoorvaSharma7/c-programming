// Even or Odd Check:
// Implement a function void checkEvenOdd(int n) that prints whether a number is even or odd.

#include<stdio.h>
void checkevenorodd(int n){
    if(n%2==0){
        printf("even");
    }
    else{
        printf("odd");
    }
}
int main(){
    int a;
    printf("enter no.");
    scanf("%d",&a);
    checkevenorodd(a);
}