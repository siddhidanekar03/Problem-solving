#include <stdio.h>
#include <stdbool.h>

bool canChoose(int** groups, int groupsSize, int* groupsColSize, int* nums, int numsSize);
{

int idx = 0, i = 0;

    while (idx < groupsSize && i < numsSize) {
        if (groups[idx][0] == nums[i]) {
            int j = 0, k = i;
            for (; k < numsSize && j < groupsColSize[idx]; k++) {
                if (groups[idx][j] == nums[k]) {
                    j++;
                } else {
                    break;
                }
            }

            if (j == groupsColSize[idx]) {
                idx++;
                i = k;
            } else {
                i++;
            }
        } else {
            i++;
        }
    }
 return idx == groupsSize;
}



int main() {
    int group1[] = {1, 2, 3}, group2[] = {3, 4}, group3[] = {5};
    int* groups[] = {group1, group2, group3};
    int groupsColSize[] = {3, 2, 1};
    int nums[] = {1, 2, 3, 4, 3, 4, 5};

    printf(canChoose(groups, 3, groupsColSize, nums, 7) ? "Output: true\n" : "Output: false\n");
    return 0;
}
