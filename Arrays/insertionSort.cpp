#include <iostream>

using namespace std;

int main(){

    int size, i, j;

    cout<<"Enter array size : "; 

    cin>>size;      

    int arr[1000];

    for(i=0; i<size; i++)
    {
        cin>>arr[i];
    }

    for(i=1; i<size; i++)
    {
        for(j=i; j>0; j--)
        {
            if(arr[j]<arr[j-1])
            {
                swap(arr[j],arr[j-1]);
            }
            else
            {
                break;
            }
        }

    }

    for(i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }

    

}    