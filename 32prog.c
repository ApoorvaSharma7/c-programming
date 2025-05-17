// Print the first N natural numbers using a do-while loop.
#include<stdio.h>
int main(){
    int n,i=1;
    printf("enter number");
    scanf("%d",&n);
    do{
        printf("%d ",i);
        i++;
    }
    while(i<=n);
    return 0;
}