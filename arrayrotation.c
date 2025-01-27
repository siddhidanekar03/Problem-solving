#include <stdio.h>
#include <stdlib.h>

// Function definition
int* circularArrayRotation(int a_count, int* a, int k, int queries_count, int* queries, int* result_count) {
    int* temp = malloc(a_count * sizeof(int));
    k = k % a_count; // Handle rotations greater than the size of the array
    for (int i = 0; i < a_count; i++) {
        temp[(i + k) % a_count] = a[i];
    }
    
    int* result = malloc(queries_count * sizeof(int));
    for (int i = 0; i < queries_count; i++) {
        result[i] = temp[queries[i]];
    }
    *result_count = queries_count;

    free(temp); // Free the temporary array memory
    return result;
}

// Main function
int main() {
    int n, k, q;

    // Input for the array size, rotation count, and number of queries
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int* a = malloc(n * sizeof(int));
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the number of rotations: ");
    scanf("%d", &k);

    printf("Enter the number of queries: ");
    scanf("%d", &q);

    int* queries = malloc(q * sizeof(int));
    printf("Enter the queries (indices to retrieve): ");
    for (int i = 0; i < q; i++) {
        scanf("%d", &queries[i]);
    }

    int result_count;
    int* result = circularArrayRotation(n, a, k, q, queries, &result_count);

    // Output the results
    printf("Results:\n");
    for (int i = 0; i < result_count; i++) {
        printf("%d\n", result[i]);
    }

    // Free allocated memory
    free(a);
    free(queries);
    free(result);

    return 0;
}

