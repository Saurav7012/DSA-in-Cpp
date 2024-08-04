#include <iostream>
using namespace std;

int perfectSum(int arr[], int index, int N, int sum)
{
    if(index == N)
    {
        return sum==0;
    }
    return perfectSum(arr, index+1, N, sum) + perfectSum(arr, index+1, N, sum-arr[index]);
}

int main(){

    int arr[100], size, X;
    cout<<"Enter number of elements : ";
    cin>>size;

    cout<<"Enter the elements : ";
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter target sum : ";
    cin>>X;
    cout<<"There are "<<perfectSum(arr, 0, size, X)<<" subsets with sum \""<<X<<"\".";
}