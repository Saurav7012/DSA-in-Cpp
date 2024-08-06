#include <iostream>
using namespace std;

int main(){

    int i, N, K;
    int arr[1000];
    cout<<"Enter Number of Elements : ";
    cin>>N;

    for(i=0;i<N;i++)
    {
        cin>>arr[i];
    }

    cout<<"Enter K value : ";
    cin>>K;

    int start=0;
    int end=N-1;
    int mid, ans=N;

    while(start<=end)
    {
        mid= start + (end-start)/2;

        if((arr[mid]-mid-1)>=K)
        {
            ans =mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    cout<<"The "<<K<<"th missing element is : "<<ans+K;




}    
