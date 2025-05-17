// Reverse a Number using while loop
#include<stdio.h>
int main(){
    int a,last,reverse=0,new;
    scanf("%d",&a);
    while(a!=0){
        last=a%10;
        reverse=reverse*10+last;
        a=a/10;
    }
    printf("%d",reverse);
}