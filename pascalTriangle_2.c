#include <stdio.h>
#include <stdlib.h>

int* getRow(int rowIndex, int* returnSize) {
    // Allocate memory for the row
    *returnSize = rowIndex + 1;
    int* row = (int*)malloc((*returnSize) * sizeof(int));
    
    // Initialize the first element of the row
    row[0] = 1;

    
    for (int i = 1; i <= rowIndex; i++) {
        for (int j = i; j > 0; j--) {
            row[j] = (j == i ? 0 : row[j]) + row[j - 1];
        }
    }

    return row;
}

int main() {
    int rowIndex = 3;
    int returnSize;
    int* row = getRow(rowIndex, &returnSize);

    printf("Row %d: [", rowIndex);
    for (int i = 0; i < returnSize; i++) {
        printf("%d", row[i]);
        if (i < returnSize - 1) printf(", ");
    }
    printf("]\n");
    
    free(row);

    return 0;
}

