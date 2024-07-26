#include <iostream>

using namespace std;

int main(){

    int size, i, j, index;

    cout<<"Enter array size : "; 

    cin>>size;      

    int arr[1000];


    for(i=0; i<size; i++)
    {
        cin>>arr[i];
    }

    for(i=0; i<size-1;i++)
    {
        index=i;

        for(j=i+1; j<size; j++)
        {
            if(arr[j]<arr[index])
            {
                index=j;
            }
        }

        swap(arr[index],arr[i]);
    }

    for(i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }

}    