#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
bool isToeplitzMatrix(int** matrix, int matrixSize, int* matrixColSize) {
    int col = matrixColSize[0];
    for (int i = 1; i < matrixSize; i++) {
        for (int j = 1; j < col; j++) {
            if (matrix[i][j] != matrix[i - 1][j - 1]) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    // Test Case 1
    int rows1 = 3;
    int cols1 = 4;
    int matrix1Data[3][4] = {
        {1, 2, 3, 4},
        {5, 1, 2, 3},
        {9, 5, 1, 2}
    };

    int** matrix1 = (int**)malloc(rows1 * sizeof(int*));
    for (int i = 0; i < rows1; i++) {
        matrix1[i] = (int*)malloc(cols1 * sizeof(int));
        for (int j = 0; j < cols1; j++) {
            matrix1[i][j] = matrix1Data[i][j];
        }
    }

    int matrixColSize1 = cols1;
    if (isToeplitzMatrix(matrix1, rows1, &matrixColSize1)) {
        printf("Test Case 1: True\n");
    } else {
        printf("Test Case 1: False\n");
    }

    for (int i = 0; i < rows1; i++) {
        free(matrix1[i]);
    }
    free(matrix1);
    return 0;
}

