#include <stdio.h>

void merge(int* nums1, int m, int* nums2, int n) {
    int i = m - 1;  // Last element of the valid part of nums1
    int j = n - 1;  // Last element of nums2
    int k = m + n - 1;  // Last index of nums1

    // Merge the arrays starting from the end
    while (i >= 0 && j >= 0) {
        if (nums1[i] > nums2[j]) {
            nums1[k--] = nums1[i--];  // Place nums1[i] in the correct position
        } else {
            nums1[k--] = nums2[j--];  // Place nums2[j] in the correct position
        }
    }

    // If there are any remaining elements in nums2, copy them
    while (j >= 0) {
        nums1[k--] = nums2[j--];
    }
}

int main() {
    // Example arrays to merge
    int nums1[6] = {1, 2, 3, 0, 0, 0};  // nums1 has extra space for nums2
    int m = 3;  // The number of initialized elements in nums1
    int nums2[] = {2, 5, 6};
    int n = 3;  // The number of elements in nums2

    // Call merge function to merge nums2 into nums1
    merge(nums1, m, nums2, n);

    // Print the merged array
    printf("Merged array: ");
    for (int i = 0; i < m + n; i++) {
        printf("%d ", nums1[i]);
    }
    printf("\n");

    return 0;
}

