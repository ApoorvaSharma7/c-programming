// Matrix Multiplication:
// Create a function void multiplyMatrix(int a[][10], int b[][10], int result[][10], int r1, int c1, int r2, int c2) to multiply two matrices.

#include <stdio.h>

#define MAX 10  // Maximum matrix size

// Function to multiply two matrices
void multiplyMatrix(int a[][MAX], int b[][MAX], int result[][MAX], int r1, int c1, int r2, int c2) {
    // Ensure matrix multiplication is possible
    if (c1 != r2) {
        printf("Matrix multiplication is not possible!\n");
        return;
    }

    // Initialize result matrix with 0
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            result[i][j] = 0;
        }
    }

    // Perform multiplication
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

// Function to input a matrix
void inputMatrix(int matrix[][MAX], int rows, int cols) {
    printf("Enter elements of the matrix (%d x %d):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to print a matrix
void printMatrix(int matrix[][MAX], int rows, int cols) {
    printf("Matrix (%d x %d):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int a[MAX][MAX], b[MAX][MAX], result[MAX][MAX];
    int r1, c1, r2, c2;

    // Input matrix dimensions
    printf("Enter rows and columns for first matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and columns for second matrix: ");
    scanf("%d %d", &r2, &c2);

    // Ensure matrix multiplication is valid
    if (c1 != r2) {
        printf("Matrix multiplication not possible! Columns of A must equal rows of B.\n");
        return 0;
    }

    // Input matrices
    inputMatrix(a, r1, c1);
    inputMatrix(b, r2, c2);

    // Multiply matrices
    multiplyMatrix(a, b, result, r1, c1, r2, c2);

    // Display result
    printf("Resultant Matrix after multiplication:\n");
    printMatrix(result, r1, c2);

    return 0;
}