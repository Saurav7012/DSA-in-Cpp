#include <iostream>

using namespace std;

int main(){

    int N, i;

    cout<<"Enter N : "; 

    cin>>N;      

    int arr[1000];

    arr[0]=0;
    arr[1]=1;

    for(i=2; i<N ;i++)
    {
        arr[i]=arr[i-1]+arr[i-2];
    }

    cout<<N<<"th element is : "<<arr[N-1];
}