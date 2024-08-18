#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

long long getMaxArea(long long heights[], int n)
{
    stack<long long> s;

    vector<long long> right(n);
    vector<long long> left(n);

    for(int i=0; i<n; i++)
    {
        while(!s.empty() && heights[s.top()] > heights[i])
        {
            right[s.top()] = i;
            s.pop();
        }
        s.push(i);
    }

    while(!s.empty())
    {
        right[s.top()] = n;
        s.pop();
    }

    for(int i=n-1; i>=0; i--)
    {
        while(!s.empty() && heights[s.top()] > heights[i])
        {
            left[s.top()] = i;
            s.pop();
        }
        s.push(i);
    }

    while(!s.empty())
    {
        left[s.top()] = -1;
        s.pop();
    }

    long long ans = 0;

    for(int i=0; i<n; i++)
    {
        ans = max(ans, heights[i] * (right[i] - left[i] - 1));
    }

    return ans;
}

int main()
{
    int n;
    cout << "Enter the number of bars: ";
    cin >> n;

    long long heights[n];
    cout << "Enter the heights of the bars: ";
    for(int i = 0; i < n; ++i)
    {
        cin >> heights[i];
    }

    cout << "The maximum area is: " << getMaxArea(heights, n) << endl;

    return 0;
}
