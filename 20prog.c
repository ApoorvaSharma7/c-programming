/*Student Pass or Fail
Write a program that takes marks of 5 subjects and checks whether a student has passed (minimum 40 in each subject and average 50) using if-else.*/
#include<stdio.h>
int main(){
    int a,b,c,d;
    float avg;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    avg=(a+b+c+d)/4;
    if(a>40 && b>40 && c>40 && d>40 && avg>50){
        printf("passed with avg marks=%f",avg);
    }
    else{
        printf("fail with avg marks=%f",avg);
    }
}