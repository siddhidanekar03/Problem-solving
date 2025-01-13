#include <stdio.h>
#include <stdbool.h>

bool checkIfExist(int* arr, int arrSize) {
    for (int i = 0; i < arrSize; i++) {
        for (int j = 0; j < arrSize; j++) {
            if (i != j && arr[i] == 2 * arr[j]) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int arr[] = {10, 2, 5, 3};
    int arrSize = sizeof(arr) / sizeof(arr[0]);

    if (checkIfExist(arr, arrSize)) {
        printf("True: There exists an element N such that another element M is twice N.\n");
    } else {
        printf("False: No such elements exist.\n");
    }

    // Additional test case
    int arr2[] = {7, 1, 14, 11};
    arrSize = sizeof(arr2) / sizeof(arr2[0]);

    if (checkIfExist(arr2, arrSize)) {
        printf("True: There exists an element N such that another element M is twice N.\n");
    } else {
        printf("False: No such elements exist.\n");
    }

    return 0;
}

