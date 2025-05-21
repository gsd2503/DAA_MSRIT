// Matrix Addtion and Substraction
#include <stdio.h>
#include <time.h>

#define MAX_SIZE 10

void matrixAddition(int A[MAX_SIZE][MAX_SIZE], int B[MAX_SIZE][MAX_SIZE], int result[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            result[i][j] = A[i][j] + B[i][j];
}

void matrixSubtraction(int A[MAX_SIZE][MAX_SIZE], int B[MAX_SIZE][MAX_SIZE], int result[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            result[i][j] = A[i][j] - B[i][j];
}

void printMatrix(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            printf("%d ", matrix[i][j]);
        printf("\n");
    }
}

int main() {
    int A[MAX_SIZE][MAX_SIZE], B[MAX_SIZE][MAX_SIZE], result[MAX_SIZE][MAX_SIZE];
    int rows, cols;
    clock_t start, end;

    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter matrix A:\n");
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            scanf("%d", &A[i][j]);

    printf("Enter matrix B:\n");
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            scanf("%d", &B[i][j]);

    start = clock();
    matrixAddition(A, B, result, rows, cols);
    end = clock();
    printf("\nMatrix Addition:\n");
    printMatrix(result, rows, cols);
    printf("Time: %.6lf seconds\n", ((double)(end - start)) / CLOCKS_PER_SEC);

    start = clock();
    matrixSubtraction(A, B, result, rows, cols);
    end = clock();
    printf("\nMatrix Subtraction:\n");
    printMatrix(result, rows, cols);
    printf("Time: %.6lf seconds\n", ((double)(end - start)) / CLOCKS_PER_SEC);

    return 0;
}
