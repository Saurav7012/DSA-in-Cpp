#include <iostream>
#include <vector>

using namespace std;

// Function to rotate the matrix
void rotate(vector<vector<int>>& matrix) {
    int n = matrix.size();
    
    // Step 1: Reverse each row
    for (int i = 0; i < n; i++) {
        int start = 0, end = n - 1;
        while (start < end) {
            swap(matrix[i][start], matrix[i][end]);
            start++, end--;
        }
    }
    
    // Step 2: Transpose the matrix
    for (int j = 0; j < n; j++) {
        int start = 0, end = n - 1;
        while (start < end) {
            swap(matrix[start][j], matrix[end][j]);
            start++, end--;
        }
    }
}

int main() {
    // Example usage
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    rotate(matrix);

    // Print the rotated matrix
    for (int i = 0; i < matrix.size(); ++i) {
        for (int j = 0; j < matrix[i].size(); ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
