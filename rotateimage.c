#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();

        // Transpose the matrix
        for (int i = 0; i < rows; i++) {
            for (int j = i + 1; j < cols; j++) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        // Reverse each row
        for (int i = 0; i < rows; i++) {
            int start = 0, end = cols - 1;

            while (start < end) {
                swap(matrix[i][start], matrix[i][end]);
                start++;
                end--;
            }
        }
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

    // Call the rotate function
    solution.rotate(matrix);

    // Print the rotated matrix
    cout << "Rotated matrix:" << endl;
    for (const auto& row : matrix) {
        for (const auto& elem : row) {
            cout << elem << " ";
        }
        cout << endl;
    }

    return 0;
}

