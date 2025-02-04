#include<stdio.h>
int main(){
    int marks;
    printf("enter marks");
    scanf("%d",&marks);
    if(marks>=90){
        printf("A");
    }
    else if(marks>=70){
        printf("B");
    }
    else if(marks>=50){
        printf("C");
    }
    else{
        printf("fail");
    }
    return 0;
}