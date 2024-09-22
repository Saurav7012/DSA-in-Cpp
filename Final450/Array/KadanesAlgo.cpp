#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, -2, 5};
    int n = 5;

    //prefixSum kand pidichond po
    //prefixSum koranja means negative element kitti
    //prefixSum < 0 , prefixSum = 0 aakk;

    int maxi = INT32_MIN, prefixSum = 0;

    for(int i=0; i<n; i++)
    {
        prefixSum += arr[i];

        if(prefixSum < 0) prefixSum = 0;

        maxi = max(maxi, prefixSum);
    }

    cout<<maxi;
}