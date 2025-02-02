#include <stdio.h>
#include <stdlib.h> // For abs()

// Function definition
char* catAndMouse(int x, int y, int z) {
    if (abs(x - z) == abs(y - z)) {
        return "Mouse C";
    }
    if (abs(x - z) < abs(y - z)) {
        return "Cat A";
    } else {
        return "Cat B";
    }
}

// Main function
int main() {
    int x, y, z;

    // Input positions of Cat A, Cat B, and the Mouse
    printf("Enter the position of Cat A: ");
    scanf("%d", &x);

    printf("Enter the position of Cat B: ");
    scanf("%d", &y);

    printf("Enter the position of the Mouse: ");
    scanf("%d", &z);

    // Function call
    char* result = catAndMouse(x, y, z);

    // Output the result
    printf("Result: %s\n", result);

    return 0;
}

