#include <stdio.h>

int findGlobalMax(int arr[], int low, int high) {
    int mid = low + (high - low) / 2;

    // If mid is a global maximum (greater than both neighbors or on boundary)
    if ((mid == 0 || arr[mid - 1] <= arr[mid]) &&
        (mid == high || arr[mid + 1] <= arr[mid])) {
        return mid;
    }

    // If right neighbor is greater, max must be in right half
    if (mid < high && arr[mid + 1] > arr[mid]) {
        return findGlobalMax(arr, mid + 1, high);
    }

    // Else, max is in left half
    return findGlobalMax(arr, low, mid - 1);
}

int main() {
    int arr[] = {1, 3, 240, 443, 12, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int maxIndex = findGlobalMax(arr, 0, n - 1);
    printf("Global maximum element is %d at index %d\n", arr[maxIndex], maxIndex);

    return 0;
}

