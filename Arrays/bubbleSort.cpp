#include <iostream>

using namespace std;

int main(){

    int size, i, j, index;

    cout<<"Enter array size : "; 

    cin>>size;      

    int arr[1000];

    int swapped=0;


    for(i=0; i<size; i++)
    {
        cin>>arr[i];
    }

    for(i=size-2; i>=0; i--)
    {
        for(j=0; j<=i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swapped=1;
            }
        }
        if(swapped==0)
        {
            cout<<"Already Sorted Array";
            return 0;
        }

    }

    

    for(i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }
}
  