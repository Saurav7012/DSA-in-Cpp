#include <iostream>
using namespace std; 

int main(){

    int i, n, arr[1000], Maxi=INT32_MIN;

    cout<<"Enter the limit : ";
    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int prefix=0;

    for(i=0; i<n; i++)
    {
        prefix+=arr[i];
        Maxi=max(Maxi,prefix);

        if(prefix<0)
        {
            prefix=0;
        }
    }
    cout<<"Maximum Subarray Sum : "<<Maxi;
}
