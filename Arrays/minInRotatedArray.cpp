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
    int ans=arr[0];

    while(start<=end)
    {
        mid=start+(end-start)/2;

        if(arr[mid]>=arr[0])
        {
            start=mid+1;
        }

        else{
            ans=arr[mid];
            end=mid-1;
        }
    }

    cout<<"Min Element : "<<ans;


}