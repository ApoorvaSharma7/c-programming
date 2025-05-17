// Find the factorial of a number using a do-while loop.
#include<stdio.h>
int main(){
    int a,b=1,c=1;
    scanf("%d",&a);
    do{
        b*=c;
        c++;
    }while(c<=a);
        printf("%d",b);
        
}