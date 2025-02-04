#include<stdio.h>
int main(){
    int a, b=1,c=1,d=1;
    scanf("%d",&a);
    while(b<=a){
        printf("%d",c);
        c=c+d;
        d=d+1;
        b=b+1;
    }
    return 0;

}
