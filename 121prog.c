// Write a program to sort students based on marks using structures.

#include<stdio.h>
#include<string.h>
struct student{
    int roll;
    char name[50];
    float marks;
};
int main(){
    struct student s[5],temp;
    int i,j;

    printf("enter details of 5 students\n");
    for(i=0;i<5;i++){
        printf("\nstudent%d\n",i+1);
        printf("roll number: ");
        scanf("%d",&s[i].roll);
        getchar();
        printf("Name: ");
        fgets(s[i].name,sizeof(s[i].name),stdin);
        s[i].name[strcspn(s[i].name,"\n")]='\0';
        printf("Marks: ");
        scanf("%f",&s[i].marks);
    }
    for(i=0;i<5-1;i++){
        for(j=i+1;j<5;j++){
            if(s[i].marks<s[j].marks){
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }
    }
    printf("sorted");
    for(i=0;i<5;i++){
        printf("\nStudent %d:\n", i + 1);
        printf("Roll Number: %d\n", s[i].roll);
        printf("Name: %s\n", s[i].name);
        printf("Marks: %.2f\n", s[i].marks);
    }
}