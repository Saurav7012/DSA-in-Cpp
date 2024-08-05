#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int ways(vector<int>&arr, int N, int sum)
{
    if(sum == 0)
    {
        return 1;
    }
    if(sum < 0)
    {
        return 0;
    }

    int ans=0;
    for(int i=0; i<N; i++)
    {
        ans+=ways(arr, N, sum-arr[i]);
    }
    return ans;
}

int main(){

    int size, sum;

    cout<<"Enter number of elements : ";
    cin>>size;
    vector<int>arr(size);

    cout<<"Enter the elements : ";
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }

    cout<<"Enter target sum : ";
    cin>>sum;

    cout<<"Number of ways to get sum \""<<sum<<"\" is "<<ways(arr, size, sum)<<".";
}