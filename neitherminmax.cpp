#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int n = nums.size();
        int max = INT_MIN;
        int min = INT_MAX;

        // Find the maximum and minimum elements
        for (int i = 0; i < n; i++) {
            if (max < nums[i]) {
                max = nums[i];
            }
            if (min > nums[i]) {
                min = nums[i];
            }
        }

        // Find a number that is neither max nor min
        for (int i = 0; i < n; i++) {
            if (nums[i] != max && nums[i] != min) {
                return nums[i];
            }
        }

        // Return -1 if no such number exists
        return -1;
    }
};

int main() {
    // Example input
    vector<int> nums = {2, 1, 3, 4};

    // Create a Solution object
    Solution solution;

    // Call the findNonMinOrMax function
    int result = solution.findNonMinOrMax(nums);

    // Print the result
    cout << "A number that is neither minimum nor maximum: " << result << endl;

    return 0;
}

