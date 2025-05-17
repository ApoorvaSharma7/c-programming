// Create a structure and access its members using a pointer.

#include<stdio.h>
struct employee{
    int id;
    char name[50];
    float salary;
};
int main(){
    struct employee[3];
    printf("Enter details of 3 employees:\n");
    for(int i=0;i<3;i++){
        printf("\n employee%d:\n";i+1);
        printf("enter id: ");
        scanf("%d",&emp[i].id);
        getchar();
        printf("enter name: ");
        fgets(emp[i].name,sizeof(emp[i].name,"\n"),stdin);
        emp[i].name[strcspn(emp[i].name,"\n")]='\0';
        printf("enter salary ");
        scanf("%f",&emp[i].salary);
    }
    printf("\n--- Employee Details ---\n");
    for (int i = 0; i < 3; i++) {
        printf("\nEmployee %d:\n", i + 1);
        printf("ID: %d\n", emp[i].id);
        printf("Name: %s\n", emp[i].name);
        printf("Salary: %.2f\n", emp[i].salary);
    }
}