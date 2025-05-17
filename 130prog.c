// Create a 2D array dynamically using a pointer to pointer (int **arr) and print it.

#include<stdio.h>
#include<stdlib.h>
int main(){
    int rows,cols;
    int **arr;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);
    arr=(int **)malloc(row * sizeof(int *));
    if (arr == NULL) {
        printf("Memory allocation failed for rows.\n");
        return 1;
    }
    for(int i=0;i<rows;i++){
        arr[i]=(int *)malloc(cols *size)
    }
}