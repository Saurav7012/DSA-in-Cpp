#include <iostream>

using namespace std;

int main(){

    int i, N, M;

    int arr[1000];

    cout<<"Enter Number of Packages : ";
    cin>>N;

    cout<<"Enter the weight of each package : ";

    for(i=0;i<N;i++)
    {
        cin>>arr[i];
    }

    cout<<"Enter number of Days : ";
    cin>>M;

    int start=0,end=0, mid, ans;

    for(i=0;i<N;i++)
    {
        start=max(start,arr[i]);
        end+=arr[i];
    }

    while(start<=end)
    {
        mid= start + (end-start)/2;

        int pages=0, count=1;

        for(i=0; i<N; i++)
        {
            pages+=arr[i];

            if(pages>mid)
            {
                count++;
                pages=arr[i];
            }
        }

        if(count<=M)
        {
            ans=mid;
            end=mid-1;
        }

        else{
            start=mid+1;
        }
    }

    cout<<"Minimum Weight Capacity : "<<ans<<" tons";

}    
