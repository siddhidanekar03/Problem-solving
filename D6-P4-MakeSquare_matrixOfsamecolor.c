#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
bool canMakeSquare(char** grid, int gridSize, int* gridColSize) {
    int row = gridSize;
    int col = *gridColSize;
    for (int i = 0; i < row - 1; i++) {
        for (int j = 0; j < col - 1; j++) {
            int bCount = 0;
            int wCount = 0;
            if (grid[i][j] == 'B')
                bCount++;
            else
                wCount++;
            if (grid[i][j + 1] == 'B')
                bCount++;
            else
                wCount++;
            if (grid[i + 1][j] == 'B')
                bCount++;
            else
                wCount++;
            if (grid[i + 1][j + 1] == 'B')
                bCount++;
            else
                wCount++;

            if (bCount == 3 || wCount == 3 || bCount == 4 || wCount == 4)
                return true;
        }
    }
    return false;
}

int main() {
    // Define the grid
    char* grid[3];
    grid[0] = (char*)malloc(3 * sizeof(char));
    grid[1] = (char*)malloc(3 * sizeof(char));
    grid[2] = (char*)malloc(3 * sizeof(char));

    // Example Test Case 1
    grid[0][0] = 'B'; grid[0][1] = 'W'; grid[0][2] = 'B';
    grid[1][0] = 'B'; grid[1][1] = 'W'; grid[1][2] = 'W';
    grid[2][0] = 'B'; grid[2][1] = 'W'; grid[2][2] = 'B';

    int gridSize = 3;
    int gridColSize = 3;

    if (canMakeSquare(grid, gridSize, &gridColSize)) {
        printf("Test Case 1: true\n");
    } else {
        printf("Test Case 1: false\n");
    }

    // Example Test Case 2
    grid[0][0] = 'B'; grid[0][1] = 'W'; grid[0][2] = 'B';
    grid[1][0] = 'W'; grid[1][1] = 'B'; grid[1][2] = 'W';
    grid[2][0] = 'B'; grid[2][1] = 'W'; grid[2][2] = 'B';

    if (canMakeSquare(grid, gridSize, &gridColSize)) {
        printf("Test Case 2: true\n");
    } else {
        printf("Test Case 2: false\n");
    }

    // Example Test Case 3
    grid[0][0] = 'B'; grid[0][1] = 'W'; grid[0][2] = 'B';
    grid[1][0] = 'B'; grid[1][1] = 'W'; grid[1][2] = 'W';
    grid[2][0] = 'B'; grid[2][1] = 'W'; grid[2][2] = 'W';

    if (canMakeSquare(grid, gridSize, &gridColSize)) {
        printf("Test Case 3: true\n");
    } else {
        printf("Test Case 3: false\n");
    }

    // Free allocated memory
    free(grid[0]);
    free(grid[1]);
    free(grid[2]);

    return 0;
}

