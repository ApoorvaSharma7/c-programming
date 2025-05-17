#include<stdio.h>
struct student{
    char name[50];
    int rn;
};
int main(){
    struct student s={"abc",34},s1={"dbc",34};
    printf("name is %s and roll no is %d \n",s.name,s.rn);
    printf("name is %s and roll no is %d \n",s1.name,s1.rn);
    if(s.name==s1.name||s.rn==s1.rn){
        printf ("invalid database correct it");
    }
    else{
        printf("good to go");
    }
}