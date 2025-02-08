//Print the first 10 multiples of 5 using a for loop.
#include<stdio.h>
int main(){
    int n;
    for(n=1;n<=25;n++){
        if(n%5==0){
            printf("%d\n",n);

        }
    }
}