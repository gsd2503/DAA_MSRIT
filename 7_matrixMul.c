// Matrix Multiplication and time taken to calculate it
#include <stdio.h>
#include <time.h>

#define MAX_SIZE 10

void matrixMultiplication(int A[MAX_SIZE][MAX_SIZE], int B[MAX_SIZE][MAX_SIZE], int result[MAX_SIZE][MAX_SIZE], int rowsA, int colsA, int colsB) {
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            result[i][j] = 0;
            for (int k = 0; k < colsA; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

void printMatrix(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int A[MAX_SIZE][MAX_SIZE], B[MAX_SIZE][MAX_SIZE], result[MAX_SIZE][MAX_SIZE];
    int rowsA, colsA, rowsB, colsB;
    clock_t start, end;

    printf("Enter rows and columns for matrix A: ");
    scanf("%d %d", &rowsA, &colsA);
    printf("Enter elements of matrix A:\n");
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsA; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter rows and columns for matrix B: ");
    scanf("%d %d", &rowsB, &colsB);
    if (colsA != rowsB) {
        printf("Matrix multiplication not possible.\n");
        return 1;
    }
    printf("Enter elements of matrix B:\n");
    for (int i = 0; i < rowsB; i++) {
        for (int j = 0; j < colsB; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    start = clock();
    matrixMultiplication(A, B, result, rowsA, colsA, colsB);
    end = clock();

    printf("\nMatrix Multiplication Result:\n");
    printMatrix(result, rowsA, colsB);
    printf("Time: %.6lf seconds\n", ((double)(end - start)) / CLOCKS_PER_SEC);

    return 0;
}
