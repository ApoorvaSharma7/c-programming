// Use strchr() to find the first occurrence of a character in a string.

#include<stdio.h>
#include<string.h>
int main(){
    char str[100],ch;
    char *ptr;
    printf("enter string ");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';
    printf("Enter a character to find: ");
    scanf("%c", &ch);
    ptr = strchr(str, ch); 
    if(ptr!=NULL){
        int position =ptr-str;
        printf("Character '%c' found at position %d.\n", ch, position);
    }else{
        printf("Character '%c' not found in the string.\n", ch);
    }
    return 0;
}