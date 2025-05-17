// Input and Output of a Matrix

// Write a program to take input in a 2D array and print the elements in matrix form.

#include<stdio.h>
int main(){
    int rows,cols;
    int i,j;
    printf("enter num of rows ");
    scanf("%d",&rows);
    printf("enter num of cols ");
    scanf("%d",&cols);
    int matrix[rows][cols];
    printf("\nenter elements of matrix\n");
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            printf("element[%d][%d]",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("\nthe matrix\n");
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            printf("%d",matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}