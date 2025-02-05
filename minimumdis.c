#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

// Function definition
int minimumDistances(int a_count, int* a) {
    int mincount = INT_MAX;
    for (int i = 0; i < a_count; i++) {
        for (int j = i + 1; j < a_count; j++) {
            if (a[i] == a[j]) {
                int min = abs(i - j);
                if (mincount > min) {
                    mincount = min;
                }
            }
        }
    }
    return (mincount == INT_MAX) ? -1 : mincount;
}

// Main function
int main() {
    int n;

    // Input for the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int* arr = malloc(n * sizeof(int)); // Allocate memory for the array
    if (!arr) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Input for array elements
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Function call
    int result = minimumDistances(n, arr);

    // Output the result
    if (result == -1) {
        printf("No matching pairs found.\n");
    } else {
        printf("Minimum distance between matching pairs: %d\n", result);
    }

    // Free allocated memory
    free(arr);

    return 0;
}

