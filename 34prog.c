// Print the sum of first N natural numbers using a do-while loop.
#include<stdio.h>
int main(){
    int i=1, a, b=0;
    scanf ("%d",&a);
    b+=i;i++;
    do{
        b+=i;i++; 
        
        
    }while(i<=a);
        printf("%d",b);
}