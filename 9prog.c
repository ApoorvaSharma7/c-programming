// positive , negative or zero 
#include<stdio.h>
int main(){
    int a;
    printf("enter number");
    scanf("%d",&a);
    if(a>0){
        printf("positive number");

    }
    else if(a<0){
        printf("negative number");

    }
    else{
        printf("zero");
    }
}