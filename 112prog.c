// Reverse a String: Write a program to reverse a given string.
#include<stdio.h>
#include<string.h>
void reversestring(char str[]){
    int start=0;
    int end=strlen(str)-1;
    while(start<end){
        char temp=str[start];
        str[start]=str[end];
        str[end]=temp;
        start++;
        end--;
    }
}
int main(){
    char str[100];
    printf("enter a string ");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';
    reversestring(str);
    printf("%s",str);
    return 0;
}