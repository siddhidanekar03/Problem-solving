#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int pivot = -1, n = nums.size();

        // Find the pivot (first element from the end that is smaller than the next)
        for (int i = n - 2; i >= 0; i--) {
            if (nums[i] < nums[i + 1]) {
                pivot = i;
                break;
            }
        }

        // If no pivot is found, reverse the entire array
        if (pivot == -1) {
            reverse(nums.begin(), nums.end());
            return;
        }

        // Find the next greater element to swap with the pivot
        for (int i = n - 1; i > pivot; i--) {
            if (nums[i] > nums[pivot]) {
                swap(nums[i], nums[pivot]);
                break;
            }
        }

        // Reverse the part of the array after the pivot
        int i = pivot + 1, j = n - 1;
        while (i < j) {
            swap(nums[i], nums[j]);
            i++;
            j--;
        }
    }
};

int main() {
    // Example input
    vector<int> nums = {1, 2, 3};

    // Create a Solution object
    Solution solution;

    // Call the nextPermutation function
    solution.nextPermutation(nums);

    // Print the result
    cout << "Next permutation: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

