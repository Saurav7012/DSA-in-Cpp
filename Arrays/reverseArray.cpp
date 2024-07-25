#include <iostream>

using namespace std;

int main(){

    int size, i, j;

    cout<<"Enter size of Array : ";

    cin>>size;

    int arr[1000];

    for(i=0; i<size ;i++)
    {
        cin>>arr[i];    
    }

    i=0;
    j=size-1;

    while(i<j)
    {
        swap(arr[i],arr[j]);
        i++;
        j--;
    }

    for(i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }

}