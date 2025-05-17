// Find Maximum of Two Numbers:
// Write a function int max(int a, int b) that takes two integers as arguments and returns the larger one.
#include<stdio.h>
int max(int a,int b){
    if(a>b){
        return a;
    }
    else if(b>a){
        return b;
    }
    else{
        return 0;
    }
}
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    printf("larger no is %d",max(a,b));
    return 0;
}