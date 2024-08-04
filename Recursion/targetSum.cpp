#include <iostream>
using namespace std;

bool targetSum(int arr[], int index, int N, int X)
{
    if(X == 0)
    {
        return true;
    }
    if (index == N)
    {
        return false;
    }

    bool include = targetSum(arr, index+1, N, X);
    bool exclude = targetSum(arr, index+1, N, X-arr[index]);

    return include || exclude;
}

int main(){

    int arr[100], size, X;
    cout<<"Enter array size : ";
    cin>>size;

    cout<<"Enter the elements : ";
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter target sum : ";
    cin>>X;

    if(targetSum(arr, 0, size, X))
    {
        cout<<"subset with sum "<<X<<" is present."<<endl;
    }
    else
    {
        cout<<"subset with sum "<<X<<" is not present."<<endl;
    }
}