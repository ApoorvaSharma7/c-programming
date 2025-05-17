// Write a function to swap two integers using pointers.
#include<stdio.h>
int main(){
    int a,b,temp,n;
    int *p,*d;
    scanf("%d%d",&a,&b);
    *p=a;
    *d=b;
    temp=*p;
    *p=*d;
    *d=temp;
    printf("%d,%d",*p,*d);

}