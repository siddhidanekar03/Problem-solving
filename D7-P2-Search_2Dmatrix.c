#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target) {
    int left = 0, right = (matrixSize * matrixColSize[0]) - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (matrix[mid / matrixColSize[0]][mid % matrixColSize[0]] == target)
            return true;
        else if (matrix[mid / matrixColSize[0]][mid % matrixColSize[0]] > target) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    return false;
}

int main() {
    int rows = 3;
    int cols = 4;

    
    int matrixData[3][4] = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}
    };

    int** matrix = (int**)malloc(rows * sizeof(int*));
    for (int i = 0; i < rows; i++) {
        matrix[i] = (int*)malloc(cols * sizeof(int));
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = matrixData[i][j];
        }
    }
    int matrixColSize = cols;

    int target1 = 3;
    if (searchMatrix(matrix, rows, &matrixColSize, target1)) {
        printf("Test Case 1: Target %d found.\n", target1);
    } else {
        printf("Test Case 1: Target %d not found.\n", target1);
    }
    
    int target2 = 13;
    if (searchMatrix(matrix, rows, &matrixColSize, target2)) {
        printf("Test Case 2: Target %d found.\n", target2);
    } else {
        printf("Test Case 2: Target %d not found.\n", target2);
    }

    int target3 = 60;
    if (searchMatrix(matrix, rows, &matrixColSize, target3)) {
        printf("Test Case 3: Target %d found.\n", target3);
    } else {
        printf("Test Case 3: Target %d not found.\n", target3);
    }

    // Free allocated memory
    for (int i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    free(matrix);

    return 0;
}

