#include <iostream>
using namespace std;

// Function to calculate the sum of both diagonals
int diagonalSum(int** mat, int matSize, int* matColSize) {
    int pd = 0;  // Primary diagonal sum
    int sd = 0;  // Secondary diagonal sum

    for (int i = 0; i < matSize; i++) {
        pd += mat[i][i];  // Primary diagonal
        sd += mat[i][matSize - 1 - i];  // Secondary diagonal
    }

    // If the matrix size is odd, subtract the middle element once
    if (matSize % 2 == 1) {
        pd -= mat[matSize / 2][matSize / 2];
    }

    return pd + sd;  // Total diagonal sum
}

int main() {
    // Example input
    int matSize = 3;
    int matColSize = 3;
    int** mat = new int*[matSize];

    // Initialize the matrix
    mat[0] = new int[matColSize]{1, 2, 3};
    mat[1] = new int[matColSize]{4, 5, 6};
    mat[2] = new int[matColSize]{7, 8, 9};

    // Call the diagonalSum function
    int result = diagonalSum(mat, matSize, &matColSize);

    // Print the result
    cout << "Sum of diagonals: " << result << endl;

    // Free the dynamically allocated memory
    for (int i = 0; i < matSize; i++) {
        delete[] mat[i];
    }
    delete[] mat;

    return 0;
}

