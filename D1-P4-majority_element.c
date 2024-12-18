#include <stdio.h>

int majorityElement(int* nums, int numsSize) {
    int current_ele = 0, count = 0, i=0;

    for (i = 0; i < numsSize; i++) {
        if (count == 0) {
            current_ele = nums[i];
            count = 1;
        } else if (nums[i] == current_ele) {
            count++;
        } else {
            count--;
        }
    }

    count = 0;
    for (i = 0; i < numsSize; i++) {
        if (nums[i] == current_ele) {
            count++;
        }
    }

    if (count > numsSize / 2) {
        return current_ele; 
    } else {
        return -1; 
    }
}

int main() {
    int n,i;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int nums[n];
    
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int result = majorityElement(nums, n);
    if (result != -1) {
        printf("The majority element is: %d\n", result);
    } else {
        printf("No majority element exists in the array,because majority element must be greater than n/2.\n");
    }

    return 0;
}
