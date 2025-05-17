// Count the number of vowels, consonants, digits, and spaces in a string.
#include<stdio.h>
#include<ctype.h>
int main(){
    char str[100];
    int vowels=0,consonants=0,digits=0,spaces=0;
    printf("enter string ");
    fgets(str,sizeof(str),stdin);
    for(int i=0;str[i]!=0;i++){
        char ch =tolower(str[i]);
        if(isalpha(ch)){
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
                vowels++;
            }
            else{
                consonants++;
            }
        }
        else if(isdigit(ch)){
            digits++;
        }
        else{
            spaces++;
        }
    }
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);
    printf("Spaces: %d\n", spaces);   
}