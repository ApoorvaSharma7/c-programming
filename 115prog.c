// Remove all white spaces from a string.
#include<stdio.h>
void removespace(char* str){
    int i=0,j=0;
    while(str[i]){
        if(str[i]!=' '&&str[i]!='\t'&&str[i]!='\n'){
            str[j++]=str[i];
        }
        i++;
    }
    str[j]='\0';
}
int main(){
    char str[100];
    printf("enter string ");
    fgets(str,sizeof(str),stdin);
    removespace(str);
    printf("%s",str);
    return 0;
}