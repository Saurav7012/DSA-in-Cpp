#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int minKBitFlips(vector<int>& nums, int k) {

    queue<int> q;
    int n = nums.size();
    int flip = 0;

    for (int i = 0; i < n; i++) {
        if (!q.empty() && q.front() < i) {
            q.pop();
        } 

        if (q.size() % 2 == nums[i]) {
            if (i + k - 1 >= n) {
                return -1;
            }
            q.push(i + k - 1);
            flip++;
        }
    }
    return flip;
}

int main() {
    vector<int> nums = {0, 1, 0, 1, 1, 0};
    int k = 3;
    int result = minKBitFlips(nums, k);
    
    cout << "Minimum number of K-bit flips required: " << result << endl;
    return 0;
}
