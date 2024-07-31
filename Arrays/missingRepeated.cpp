#include <iostream>

using namespace std;

int main(){

    int arr[100], i, N;

    cout<<"Enter the limit : ";
    cin>>N;

    for(i=0; i<N; i++)
    {
        cin>>arr[i];
    }

    for(i=0; i<N; i++)
    {
        arr[i]--;
    }

    for(i=0; i<N; i++)
    {
        arr[arr[i]%N]+=N;
    }

    for(i=0; i<N; i++)
    {
        if(arr[i]/N==2)
        {
            cout<<"Repeated : "<<i+1<<endl;
            break;
        }
    }

    for(i=0; i<N; i++)
    {
        if(arr[i]/N==0)
        {
            cout<<"Missing : "<<i+1;
            break;
        }
    }
}