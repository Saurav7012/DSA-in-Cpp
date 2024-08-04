#include <iostream>
using namespace std;

void subsetSum(int arr[], int index, int N, int sum)
{
    if(index == N)
    {
        cout<<sum<<endl;
        return;
    }
    subsetSum(arr, index+1, N, sum);
    subsetSum(arr, index+1, N, sum + arr[index]);
}

int main(){

    int arr[100], size;
    cout<<"Enter array size : ";
    cin>>size;

    cout<<"Enter the elements : ";
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }
    cout<<"Subset sum's are given below."<<endl;
    subsetSum(arr, 0, size, 0);
}