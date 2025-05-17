// Check Palindrome: Write a function that checks whether a given string is a palindrome.

#include<stdio.h>
#include<String.h>
void palindrom(char str[]){
    int start=0;
    int end=strlen(str)-1;
    char copy[100];
    strcpy(copy,str);
    while(start<end){
        char temp=str[start];
        str[start]=str[end];
        str[end]=temp;
        end--;
        start++;
    }
    printf("%s\n",str);
    printf("%s\n",copy);
    if(strcmp(copy,str)==0){
        printf ("it is palindrom");
    }else{
        printf("it is not palindrom");
    }
}
int main(){
    char str[100];
    fgets(str ,sizeof(str) ,stdin);
    str[strcspn(str ,"\n")]='\0';
    palindrom(str);
   
    return 0;
}