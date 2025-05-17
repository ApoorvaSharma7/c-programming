// Dynamically allocate memory for a structure and input data using a pointer.

#include<stdio.h>
#include<stdlib.h>
struct student{
    char name[50];
    int roll;
    float marks;
};
int main(){
    struct student *ptr=(structstudent *)malloc(sizeof(struct student));
    fgets(ptr->name,sizeof(ptr->name),stdin);
    ptr->name[strcspn(ptr->name,"\n")]="\0";
    scanf("%d",&ptr->roll);
    scanf("%f",&ptr->marks);
    printf("\n--- Student Details ---\n");
    printf("Name: %s\n", ptr->name);
    printf("Roll Number: %d\n", ptr->roll);
    printf("Marks: %.2f\n", ptr->marks);
}