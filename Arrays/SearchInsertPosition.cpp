#include <iostream>

using namespace std;

int BinarySearch(int a[], int N, int target)
{
    int mid;
    int start=0;
    int end=N-1;
    int index=N;

    while (start<=end)
    {
        mid= (start+end)/2;

        if (a[mid]==target)
        {
            index=mid;
            break;

        }
        else if (a[mid]<target)
        {
            start=mid+1;
        }
        else{
            index=mid;
            end=mid-1;
        }
    }

    return index;
}    


int main(){

    int size, i, j, key;

    cout<<"Enter array size : "; 

    cin>>size;      

    int arr[1000];

    for(i=0; i<size; i++)
    {
        cin>>arr[i];
    }

    cout<<"Enter element not present in the array : ";
    cin>>key;

    cout<<"Element should be at position : "<<BinarySearch(arr,size,key);

}    

    
   