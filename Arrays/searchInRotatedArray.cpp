#include <iostream>

using namespace std;

int main(){

    int i, N, start, end, mid, target, ans;

    int arr[1000];

    cout<<"Enter Number of Elements : ";
    cin>>N;

    for(i=0;i<N;i++)
    {
        cin>>arr[i];
    }

    cout<<"Enter Element to be Searched : ";
    cin>>target;

    start=0;
    end=N-1;

    while (start<=end)
    {
        mid=start+(end - start)/2;

        if(arr[mid]==target)
        {
            ans=mid;
            break;
        }

        else if(arr[mid]>=arr[0])
        {
            if(arr[start]<=target && arr[end]>=target)
            {
                end=mid-1;
            }
            else
            {
                start=mid+1;
            }
        }
        else{
            if(arr[start]<=target && arr[end]>=target)
            {
                start=mid+1;
            }
            else
            {
                end=mid-1;
            }
        }
    }

    cout<<"Element Index : "<<ans;
}    
