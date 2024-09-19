
// Que.6	WAP to make addition, Subtraction and multiplication of two matrix using 2-D Array

#include <stdio.h>

void add(int rows, int cols, int matrix1[rows][cols], int matrix2[rows][cols], int result[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

void sub(int rows, int cols, int matrix1[rows][cols], int matrix2[rows][cols], int result[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
}
void multi(int rows1, int cols1, int cols2, int matrix1[rows1][cols1], int matrix2[cols1][cols2], int result[rows1][cols2]) {
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < cols1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}
void inMat(int rows, int cols, int matrix[rows][cols], int matrixNumber) {
    printf("Enter the elements of Matrix %d (%dx%d):\n", matrixNumber, rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void printMat(int rows, int cols, int matrix[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}



int main() {
    int rows, cols;

    printf("Enter the number of rows and columns for Matrix A and Matrix B (same for both): ");
    scanf("%d %d", &rows, &cols);

    int matrixA[rows][cols];
    int matrixB[rows][cols];
    int result[rows][cols];
    int mulResult[rows][cols];


    inMat(rows, cols, matrixA, 1);
    inMat(rows, cols, matrixB, 2);


    add(rows, cols, matrixA, matrixB, result);
    printf("Result of Matrix Addition:\n");
    printMat(rows, cols, result);

    sub(rows, cols, matrixA, matrixB, result);
    printf("Result of Matrix Subtraction:\n");
    printMat(rows, cols, result);

    multi(rows, cols, cols, matrixA, matrixB, mulResult);
    printf("Result of Matrix Multiplication:\n");
    printMat(rows, cols, mulResult);

    return 0;
}




















