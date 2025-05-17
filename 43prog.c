// 3. Check if a Number is Positive, Negative, or Zero
#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    (a>0)?printf("positive"):(a<0)? printf("negative"):printf("zero");
}