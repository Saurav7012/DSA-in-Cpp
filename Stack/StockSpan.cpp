#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> calculateSpan(int price[], int n) {
    vector<int> ans(n);
    stack<int> s;
    
    for (int i = n - 1; i >= 0; i--) {
        while (!s.empty() && price[i] > price[s.top()]) {
            ans[s.top()] = s.top() - i;
            s.pop();
        }
        s.push(i);
    }
    
    while (!s.empty()) {
        ans[s.top()] = s.top() + 1;
        s.pop();
    }
    
    return ans;
}

int main() {
    int price[] = {100, 80, 60, 70, 60, 75, 85};
    int n = sizeof(price) / sizeof(price[0]);
    
    vector<int> span = calculateSpan(price, n);
    
    cout << "Span values for the stock prices are: ";
    for (int i = 0; i < n; i++) {
        cout << span[i] << " ";
    }
    
    return 0;
}
