#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
        printf("%c ",64+i);
    }
    return 0;
}