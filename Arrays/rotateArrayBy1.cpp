#include <iostream>

using namespace std;

int main(){

    int size, i, temp;

    cout<<"Enter array size : "; 

    cin>>size;      

    int arr[1000];


    for(i=0; i<size; i++)
    {
        cin>>arr[i];
    }

    temp=arr[size-1];

    for(i=size-2; i>=0; i--)
    {
        arr[i+1]=arr[i];
    }

    arr[0]=temp;

    for(i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }

    
}