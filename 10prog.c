//Write a program to find the largest of three numbers using an if-else statement.
#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter 3 numbers");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && b>c){
        printf("a (%d) is largest of three numbers ",a);

    }
    else if(b>a && a>c){
        printf("b (%d) is largest of three numbers ",b);
    }
    else{
        printf("c (%d) is largest of three numbers ",c);
    }
    return 0;
}