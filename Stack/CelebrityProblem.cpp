#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int celebrity(vector<vector<int>>& M) {
    stack<int> s;

    int n = M.size();

    for (int i = n - 1; i >= 0; i--) {
        s.push(i);
    }

    while (s.size() > 1) {
        int first = s.top();
        s.pop();
        int second = s.top();
        s.pop();

        if (M[first][second] && !M[second][first]) {
            s.push(second);
        } else if (!M[first][second] && M[second][first]) {
            s.push(first);
        }
    }

    if (s.empty()) {
        return -1;
    }

    int num = s.top();
    s.pop();

    int row = 0, col = 0;

    for (int i = 0; i < n; i++) {
        row += M[num][i];
        col += M[i][num];
    }

    return row == 0 && col == n - 1 ? num : -1;
}

int main() {
    vector<vector<int>> M = {
        {0, 1, 0},
        {0, 0, 0},
        {0, 1, 0}
    };

    int result = celebrity(M);

    if (result == -1) {
        cout << "No celebrity found." << endl;
    } else {
        cout << "Celebrity is at index " << result << endl;
    }

    return 0;
}
