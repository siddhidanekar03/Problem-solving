#include<stdio.h>
int search(int* nums, int numsSize, int target) {
    int left =0;
    int right=numsSize-1;
    while(left<=right){
        int mid = (left+right)/2;
        if(nums[mid]==target)
            return mid;
        else{
            if(nums[left]<=nums[mid]){
                if(nums[left]<=target && target<nums[mid])
                    right=mid-1;
                else
                    left=mid+1;
            }
            else{
                if(nums[mid]<target && target<=nums[right])
                    left=mid+1;
                else
                    right=mid-1;
            }
        }
    }
    return -1;
}
int main() {
    // Example test case: rotated sorted array
    int nums[] = {4, 5, 6, 7, 0, 1, 2};
    int numsSize = sizeof(nums) / sizeof(nums[0]);

    int target = 0;
    int result = search(nums, numsSize, target);
    if (result != -1) {
        printf("Target %d found at index %d.\n", target, result);
    } else {
        printf("Target %d not found.\n", target);
    }

    // Additional test cases
    target = 3;
    result = search(nums, numsSize, target);
    if (result != -1) {
        printf("Target %d found at index %d.\n", target, result);
    } else {
        printf("Target %d not found.\n", target);
    }

    return 0;
}
