//Calculate the sum of numbers from 1 to N using a for loop (take N as input)
#include<stdio.h>
int main(){
    int i,n ,sum;
    sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
       sum+=i ;
      
    }
    printf("%d",sum);
}

