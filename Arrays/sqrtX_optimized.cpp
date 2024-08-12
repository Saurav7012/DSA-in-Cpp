#include <iostream>
using namespace std;

int main(){

    int N;
    cout<<"Enter Number : ";
    cin>>N;

    int mid, start=0, end=N, ans;

    while (start<=end)
    {
        mid=start +(end-start)/2;

        if(mid*mid==N)
        {
            ans=mid;
            break;
        }

        else if(mid*mid<N)
        {
            ans=mid;
            start=mid+1;
        }

        else
        {
            end=mid-1;
        }
    }

    cout<<"Sqrt is : "<<ans;
}
