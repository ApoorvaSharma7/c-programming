// Fibonacci Series:
#include<stdio.h>
int main(){
    int n,f=0,s=1,next,i=0;
    scanf("%d",&n);
    while(i<=n){
        printf("%d\n",f);
        next=f+s;
        f=s;
        s=next;
        i++;
    }
    printf("\n");
}