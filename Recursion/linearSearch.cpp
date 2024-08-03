#include <iostream>
using namespace std;

bool linearSearch(int arr[], int X, int index)
{
    if(index == -1)
    {
        return false;
    }

    if(arr[index] == X)
    {
        return true;
    }
    return linearSearch(arr, X, index-1);
}

int main(){

    int arr[100], N, X;
    cout<<"Enter array size : ";
    cin>>N;

    cout<<"Enter the numbers : ";
    for(int i=0; i<N; i++)
    {
        cin>>arr[i];
    }

    cout<<"Enter number to be searched : ";
    cin>>X;

    if(linearSearch(arr, X, N-1))
    {
        cout<<"The given number is present in the array."<<endl;
    }
    else
    {
        cout<<"The given number is not present in the array."<<endl;
    }
}