#include <iostream>
using namespace std;

int subsetSum(int arr[], int index, int N, int sum)
{
    if(sum == 0)
    {
        return 1;
    }
    if(index==N || sum<0)
    {
        return 0;
    }
    return subsetSum(arr, index+1, N, sum) + subsetSum(arr, index, N, sum-arr[index]);
}

int main(){

    int arr[100], size, sum;

    cout<<"Enter number of elements : ";
    cin>>size;

    cout<<"Enter the elements : ";
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter target sum : ";
    cin>>sum;

    cout<<"The number of subsets with the sum \""<<sum<<"\" is "<<subsetSum(arr, 0, size, sum)<<"."<< endl;
}