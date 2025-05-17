// Row-wise and Column-wise Sum
// Print the sum of each row and each column of a 2D array.

#include<stdio.h>
int main(){
    int rows,cols,i,j,sumr=0;
    printf("enter no. of rows ");
    scanf("%d",&rows);
    printf("enter no. of cols ");
    scanf("%d",&cols);
    int matrix[rows][cols];
    printf("\nmatrix\n");
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            printf("elements[%d][%d] ",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }

    printf("\nThe matrix is:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    
    printf("\nsum of rows\n");
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            sumr+=matrix[i][j];
        }
        printf("sum of row %d=%d\n",i,sumr);
    }

    printf("\nColumn-wise sums:\n");
    for (j = 0; j < cols; j++) {
        int colSum = 0;
        for (i = 0; i < rows; i++) {
            colSum += matrix[i][j];
        }
        printf("Sum of column %d = %d\n", j, colSum);
    }
    return 0;

    
}
