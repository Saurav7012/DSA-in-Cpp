#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void merge(int arr[], int start, int mid, int end)
{
    vector<int>temp(end-start+1);
    int left = start;
    int right = mid+1;
    int index = 0;

    while(left<=mid && right<=end)
    {
        if(arr[left]>arr[right])
        {
            temp[index] = arr[right];
            right++,index++;
        }
        else
        {
            temp[index] = arr[left];
            left++,index++;
        }
    }

    while(left<=mid)
    {
        temp[index] = arr[left];
        index++,left++;
    }

    while(right<=end)
    {
        temp[index] = arr[right];
        index++,right++;
    }

    index=0;
    while(start<=end)
    {
        arr[start] = temp[index];
        index++,start++;
    }
}

void mergeSort(int arr[], int start, int end)
{
    if (start == end)
    {
        return;
    }
    int mid = start + (end-start)/2;
    mergeSort(arr,start,mid);
    mergeSort(arr,mid+1,end);
    merge(arr,start,mid,end);
}

int main(){

    int arr[100], size;

    cout<<"Enter number of elements : ";
    cin>>size;

    cout<<"Enter array elements : ";
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }

    mergeSort(arr,0,size-1);

    cout<<"Sorted array : ";
    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<"  ";
    }
}   