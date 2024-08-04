#include <iostream>
using namespace std;

int partition(int arr[], int start, int end)
{
    int pos = start;
    int pivotValue = arr[end];

    for(int i=start; i<=end; i++)
    {
        if(arr[i] <= pivotValue)
        {
            swap(arr[i], arr[pos]);
            pos++;
        }
    }
    return pos-1;
}

void quickSort(int arr[], int start, int end)
{
    if(start>=end)
    {
        return;
    }
    int pivot = partition(arr, start, end);
    quickSort(arr, start , pivot-1);
    quickSort(arr, pivot+1, end);
}

int main(){

    int arr[100], size;

    cout<<"Enter number of elements : ";
    cin>>size;

    cout<<"Enter the elements : ";
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }

    quickSort(arr, 0, size-1);

    cout<<"Sorted array : ";
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<"  ";
    }
}