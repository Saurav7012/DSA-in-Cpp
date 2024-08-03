#include <iostream>
using namespace std;

bool binarySearch(int arr[], int start, int end, int X)
{
    if(start > end)
    {
        return false;
    }

    int mid = start + (end - start)/2;
    if(arr[mid] == X)
    {
        return true;
    }
    else if(arr[mid] > X)
    {
        return binarySearch(arr, start, mid-1, X);
    }
    else
    {
        return binarySearch(arr, mid+1, end, X);
    }
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

    cout<<"Enter element to be searched : ";
    cin>>X;

    if(binarySearch(arr, 0, size-1, X))
    {
        cout<<"The given element is present in the array."<<endl;
    }
    else
    {
        cout<<"The given element is not present in the array."<<endl;
    }
}