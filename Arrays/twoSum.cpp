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

    int start=0;
    int end=n-1;
    int x, y;

    while(start<end)
    {
        if((arr[start]+arr[end])==target)
        {
            x=arr[start];
            y=arr[end];
            break;
        }
        else if((arr[start]+arr[end])>target)
        {
            end--;
        }
        else
        {
            start++;
        }
        
    }
    

    cout<<"Two Numbers are : "<<x<<" and "<<y;

}    