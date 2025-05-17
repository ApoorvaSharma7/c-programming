// Check Palindrome Number using while
#include<stdio.h>
int main(){
    int n,last,reverse=0,og;
    scanf("%d",&n);
    og=n;
    while(n!=0){
        last=n%10;
        reverse=reverse*10+last;
        n/=10;
    }
    if(reverse==og){
        printf("%d palindrom",reverse);
    }
    else{
        printf("%d not palindrom",reverse);
    }

}