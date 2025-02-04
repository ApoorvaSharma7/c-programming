#include<stdio.h>
int main (){
    int n=12,count;
    for(count=0; n>0; n=n/2)//binary form m 12 m kitne 1 aa rhe h 
    {
        count+=n%2;
    }
    printf("%d",count);
    return 0;
}