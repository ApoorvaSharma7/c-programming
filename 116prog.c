// Sort the characters of a string alphabetically
#include<stdio.h>
#include<string.h>
void sort(char str[]){
    int i,j;
    char temp;
    int len=strlen(str);
    for(i=0;i<len-1;i++){
        for(j=i+1;j<len;j++){
            if(str[i]>str[j]){
                temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }
        }
    }
}
int main(){
    char str[100];
    printf("enter string ");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';
    sort(str);
    printf("%s",str);
    return 0;
}