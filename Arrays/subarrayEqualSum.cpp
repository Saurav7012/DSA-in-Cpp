#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int divide(vector<int>arr)
{
    int maxi= INT32_MIN, prefix=0, i, ans, n=arr.size();

    int totalSum=0;

    for(i=0;i<n;i++)
    totalSum+=arr[i];

    for(i=0;i<n;i++)
    {
        prefix+=arr[i];
        ans=totalSum-prefix;

        if(ans==prefix)
        return 1;
    }

    return 0;
}

int main(){

    int n;
    cout<<"Enter size of array : ";
    cin>>n;

    vector<int>v(n);

    cout<<"Enter the elements : ";

    for(int i=0;i<n;i++)
    cin>>v[i];

    int value= divide(v);

    if (value==1)
    {
        cout<<"This Array can be Divided into 2 subarrays giving equal Sum ";
    }

    else{
        cout<<"Cannot Divide into 2 subarrays giving equal Sum ";
    }

}    