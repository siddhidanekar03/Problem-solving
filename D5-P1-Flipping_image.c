#include <stdio.h>
#include <stdlib.h>
int** flipAndInvertImage(int** image, int imageSize, int* imageColSize, int* returnSize, int** returnColumnSizes) {
    // Allocate memory for the output array.
    int** result = (int**)malloc(imageSize * sizeof(int*));
    *returnColumnSizes = (int*)malloc(imageSize * sizeof(int));
    *returnSize = imageSize;

    for (int i = 0; i < imageSize; i++) {
        int colSize = imageColSize[i];
        result[i] = (int*)malloc(colSize * sizeof(int));
        (*returnColumnSizes)[i] = colSize;

        // Flip and invert the row.
        for (int j = 0; j < colSize; j++) {
            // Flip: Access the column from the end (colSize - j - 1).
            // Invert: XOR the value with 1 to flip 0 <-> 1.
            result[i][j] = image[i][colSize - j - 1] ^ 1;
        }
    }

    return result;
}

// Helper function to print the 2D array.
void printImage(int** image, int rows, int* colSizes) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < colSizes[i]; j++) {
            printf("%d ", image[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int nRows, nCols;

    // Input the number of rows and columns.
    printf("Enter the number of rows: ");
    scanf("%d", &nRows);
    printf("Enter the number of columns: ");
    scanf("%d", &nCols);

    // Allocate memory for the image.
    int** image = (int**)malloc(nRows * sizeof(int*));
    int* imageColSize = (int*)malloc(nRows * sizeof(int));

    printf("Enter the image (0s and 1s only):\n");
    for (int i = 0; i < nRows; i++) {
        image[i] = (int*)malloc(nCols * sizeof(int));
        imageColSize[i] = nCols; // All rows have the same number of columns.
        for (int j = 0; j < nCols; j++) {
            scanf("%d", &image[i][j]);
        }
    }

    int* returnColumnSizes;
    int returnSize;

    // Call the flipAndInvertImage function.
    int** result = flipAndInvertImage(image, nRows, imageColSize, &returnSize, &returnColumnSizes);

    // Print the results.
    printf("\nOriginal Image:\n");
    printImage(image, nRows, imageColSize);

    printf("\nFlipped and Inverted Image:\n");
    printImage(result, returnSize, returnColumnSizes);

    // Free allocated memory.
    for (int i = 0; i < nRows; i++) {
        free(image[i]);
        free(result[i]);
    }
    free(image);
    free(result);
    free(imageColSize);
    free(returnColumnSizes);

    return 0;
}

