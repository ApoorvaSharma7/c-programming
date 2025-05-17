// find the sum ,the normal matrix and the transpose of the normal matrix

#include<stdio.h>
int main(){
    int rows,cols,i,j,sum=0;
    printf("enter no. of rows ");
    scanf("%d",&rows);
    printf("enter no. of cols ");
    scanf("%d",&cols);
    int matrix[rows][cols];
    
    printf("enter elements\n");
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            printf("elements[%d][%d] ",i,j);
            scanf("%d",&matrix[i][j]);
            sum+=matrix[i][j];
        }
    }

    printf("\nsum=%d\n",sum);

    printf("\nnormal matrix\n");
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }

    printf("\ntranspose\n");
    for(j=0;j<cols;j++){
        for(i=0;i<rows;i++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n"); 
    }

    return 0;
}