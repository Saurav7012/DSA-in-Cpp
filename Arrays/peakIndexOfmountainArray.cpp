#include <iostream>

using namespace std;

int main(){

    int i, N, start, end, mid;

    int arr[1000];

    cout<<"Enter Number of Elements : ";
    cin>>N;

    for(i=0;i<N;i++)
    {
        cin>>arr[i];
    }

    start=0; 
    end=N-1;   
    int index=-1;

    while(start<=end)                   
    {
        mid=start + (end-start)/2;               

        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
        {
            cout<<"Peak element index is : "<<mid;   
            break;
        }

        else if(arr[mid]<arr[mid+1])
        {
            start=mid+1;
        }

        else{
            end=mid-1;
        }
    }
}