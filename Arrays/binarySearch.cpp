#include <iostream>

using namespace std;

int main(){

    int size, i, j, key, mid;

    cout<<"Enter array size : "; 

    cin>>size;      

    int arr[1000];

    for(i=0; i<size; i++)
    {
        cin>>arr[i];
    }

    cout<<"Enter element to be searched : ";
    cin>>key;

    int start=0;
    int end=size-1;

    while (start<=end)
    {
        mid= (start+end)/2;

        if (arr[mid]==key)
        {
            cout<<"Element found at index : "<<mid;
            break;
        }
        else if (arr[mid]<key)
        {
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    
}    

    
   