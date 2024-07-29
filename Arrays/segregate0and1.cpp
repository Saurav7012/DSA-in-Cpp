#include <iostream>

using namespace std;

int main(){
    int arr[1000], i, n;

    cout<<"Enter the limit : ";

    cin>>n;

    cout<<"Enter array elements 0 and 1 : ";

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int start=0, end=n-1;

    while(start<end)
    {
        if(arr[start]==0)
        {
            start++;
        }
        else{
            if (arr[end]==0)
            {
                swap(arr[start],arr[end]);
                start++;
                end--;
            }
            else{
                end--;
            }
        }
    }

    cout<<"Segregated array : ";

    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

