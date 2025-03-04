#include <stdio.h>
#include <stdlib.h>

// Function definition
int beautifulTriplets(int d, int arr_count, int* arr) {
    int tripletcount = 0;
    
    for (int i = 0; i < arr_count; i++) {
        for (int j = i + 1; j < arr_count; j++) {
            if (arr[j] - arr[i] == d) {
                for (int k = j + 1; k < arr_count; k++) {
                    if (arr[k] - arr[j] == d) {
                        tripletcount++;
                    }
                }
            }
        }
    }

    return tripletcount;
}

// Main function
int main() {
    int n, d;

    // Input for the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int* arr = malloc(n * sizeof(int)); // Allocate memory for the array
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input for the common difference
    printf("Enter the common difference (d): ");
    scanf("%d", &d);

    // Function call
    int result = beautifulTriplets(d, n, arr);

    // Output the result
    printf("Number of beautiful triplets: %d\n", result);

    // Free allocated memory
    free(arr);

    return 0;
}

