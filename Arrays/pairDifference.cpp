#include <iostream>

using namespace std;

int main()
{
    int arr[1000], i, n, target;

    cout<<"Enter the limit : ";

    cin>>n;

    cout<<"Enter array elements : ";

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"Enter Target Value : ";

    cin>>target;

    int start=arr[0], end=arr[1], x, y;

    while(end<n)
    {
        if(arr[end]-arr[start]==target)
        {
            x=arr[start];
            y=arr[end];
            break;
        }

        else if(arr[end]-arr[start]<target)
        {
            end++;
        }
        else
        {
            start++;
        }
    }

    cout<<"Two numbers are : "<<x<<" and "<<y;

}    