#include <iostream>
using namespace std;

void Heapify(int arr[], int index, int n)
{
    int smallest = index;
    int left = 2 * index + 1;
    int right = 2 * index + 2;

    if(left<n && arr[left] < arr[smallest])
    {
        smallest = left;
    }

    if(right<n && arr[right] < arr[smallest])
    {
        smallest = right;
    }

    if(smallest != index)
    {
        swap(arr[index], arr[smallest]);
        Heapify(arr, smallest, n);
    }
}

void print(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void buildMinHeap(int arr[], int n)
{
    for(int i=n/2-1; i>=0; i--)
    {
        Heapify(arr, i, n);
    }
}

int main()
{
    int arr[] = {14,15,12,22,17,20,18,24,23,30};
    buildMinHeap(arr, 10);
    print(arr, 10);
}