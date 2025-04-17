#include <stdio.h>


int findPeakRecursive(int arr[], int low, int high, int n) {
    int mid = low + (high - low) / 2;

    
    if ((mid == 0 || arr[mid - 1] <= arr[mid]) &&
        (mid == n - 1 || arr[mid + 1] <= arr[mid])) {
        return mid;
    }

    
    if (mid > 0 && arr[mid - 1] > arr[mid]) {
        return findPeakRecursive(arr, low, mid - 1, n);
    }

    
    return findPeakRecursive(arr, mid + 1, high, n);
}

// Wrapper function
int findPeak(int arr[], int n) {
    return findPeakRecursive(arr, 0, n - 1, n);
}

int main() {
    int arr[] = {1, 3, 20, 4, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    int peakIndex = findPeak(arr, n);
    printf("Peak element is %d at index %d\n", arr[peakIndex], peakIndex);

    return 0;
}
