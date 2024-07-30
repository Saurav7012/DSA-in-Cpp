#include <iostream>

using namespace std;


bool threeSum(int arr[],int n, int X)
{
    for(int j=n-2;j>=0;j--)
    {
        for(int i=0;i<=j;i++)
        {
            if(arr[i]>arr[i+1])
            {
                swap(arr[i],arr[i+1]);
            }
        }
    }
    for(int i=0;i<n-2;i++)
    {

        int start=i+1, end=n-1;

        while(start<end)
        {
            if(arr[start]+arr[end]==X-arr[i])
            {
                return 1;
            }

            else if(arr[start]+arr[end]>X-arr[i])
            {
                end--;
            }
            else
            {
                start++;
            }
        }
    }   

    return 0;
}

int main(){

    int arr[1000], i, n;

    cout<<"Enter the limit : ";
    cin>>n;

    cout<<"Enter the numbers : ";

    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int X;
    cout<<"Enter the SUM : ";
    cin>>X;

    int ans= threeSum(arr, n, X);

    if (ans==1)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }



    
}