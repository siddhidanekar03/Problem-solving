#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();
        int srow = 0, erow = m - 1, scol = 0, ecol = n - 1;
        vector<int> ans;

        while (srow <= erow && scol <= ecol) {
            // Top row
            for (int j = scol; j <= ecol; j++) {
                ans.push_back(matrix[srow][j]);
            }
            // Right column
            for (int i = srow + 1; i <= erow; i++) {
                ans.push_back(matrix[i][ecol]);
            }
            // Bottom row
            for (int j = ecol - 1; j >= scol; j--) {
                if (srow == erow) break;
                ans.push_back(matrix[erow][j]);
            }
            // Left column
            for (int i = erow - 1; i >= srow + 1; i--) {
                if (scol == ecol) break;
                ans.push_back(matrix[i][scol]);
            }
            srow++, erow--, scol++, ecol--;
        }
        return ans;
    }
};

int main() {
    // Sample matrix
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Create a Solution object
    Solution solution;

    // Call the spiralOrder function
    vector<int> result = solution.spiralOrder(matrix);

    // Print the result
    cout << "Spiral order of the matrix:" << endl;
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

