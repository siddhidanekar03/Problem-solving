 #include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<vector<int>> getPairs(vector<int>& arr) {
        vector<vector<int>> result;
        int n = arr.size();

        // Sort the array
        sort(arr.begin(), arr.end());

        int left = 0, right = n - 1;
        while (left < right) {
            int sum = arr[left] + arr[right];

            // If the sum is zero, we've found a pair
            if (sum == 0) {
                result.push_back({arr[left], arr[right]});
                // Skip duplicates by moving both pointers
                while (left < right && arr[left] == arr[left + 1]) left++;
                while (left < right && arr[right] == arr[right - 1]) right--;
                left++;
                right--;
            }
            // If the sum is less than zero, move left pointer to the right to increase the sum
            else if (sum < 0) {
                left++;
            }
            // If the sum is greater than zero, move right pointer to the left to decrease the sum
            else {
                right--;
            }
        }

        return result;
    }
};

int main() {
    Solution solution;
    vector<int> arr = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> pairs = solution.getPairs(arr);

    cout << "Distinct Pairs: " << endl;
    for (const auto& pair : pairs) {
        cout << "[" << pair[0] << ", " << pair[1] << "]" << endl;
    }

    return 0;
}

