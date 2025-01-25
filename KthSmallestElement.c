#include <stdio.h>
#include <stdlib.h>

// Helper function to count numbers <= mid in the matrix
int countLessEqual(int** matrix, int matrixSize, int* matrixColSize, int mid) {
    int count = 0;
    int n = *matrixColSize;
    for (int i = 0; i < matrixSize; i++) {
        int left = 0, right = n - 1;
        while (left <= right) {
            int midIndex = left + (right - left) / 2;
            if (matrix[i][midIndex] <= mid) {
                left = midIndex + 1;
            } else {
                right = midIndex - 1;
            }
        }
        count += left; // Numbers <= mid in this row
    }
    return count;
}

int kthSmallest(int** matrix, int matrixSize, int* matrixColSize, int k) {
    int low = matrix[0][0];
    int high = matrix[matrixSize - 1][*matrixColSize - 1];
    int result = low;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        int count = countLessEqual(matrix, matrixSize, matrixColSize, mid);

        if (count < k) {
            low = mid + 1;
        } else {
            result = mid;
            high = mid - 1;
        }
    }

    return result;
}

int main() {
    int matrixData[3][3] = {
        {1, 5, 9},
        {10, 11, 13},
        {12, 13, 15}
    };
    int* matrix[3];
    for (int i = 0; i < 3; i++) {
        matrix[i] = matrixData[i];
    }
    int matrixSize = 3;
    int matrixColSize = 3;
    int k = 8;

    printf("The %dth smallest element is: %d\n", k, kthSmallest(matrix, matrixSize, &matrixColSize, k));
    return 0;
}

