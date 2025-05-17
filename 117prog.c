// Use strcat() to concatenate two strings.

#include<stdio.h>
#include<string.h>
int main(){
    char str1[200];
    char str2[100];
    printf("enter 1st string: ");
    fgets(str1,sizeof(str1),stdin);
    str1[strcspn(str1,"\n")]='\0';

    printf("enter 2nd string: ");
    fgets(str2,sizeof(str2),stdin);
    str1[strcspn(str2,"\n")]='\0';

    strcat(str1,str2);
    printf("%s",str1);
    return 0;
}