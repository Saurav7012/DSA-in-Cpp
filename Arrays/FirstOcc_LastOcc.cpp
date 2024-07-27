#include <iostream>
#include <vector>
#include <utility>

using namespace std;

pair<int,int> BinarySearch(int a[], int N, int target)
{
    int mid;
    int start=0;
    int end=N-1;
    int first=-1;
    int last=-1;

    while (start<=end)
    {
        mid= (start+end)/2;

        if (a[mid]==target)
        {
            first=mid;
            end=mid-1;

        }
        else if (a[mid]<target)
        {
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }

    start=0;
    end=N-1;

    while (start<=end)
    {
        mid= (start+end)/2;

        if (a[mid]==target)
        {
            last=mid;
            start=mid+1;

        }
        else if (a[mid]<target)
        {
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }

    return make_pair(first,last);


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

    cout<<"Enter element to be searched : ";
    cin>>key;

    pair<int,int> result= BinarySearch(arr,size,key);

    if(result.first!=-1)
    {
        cout<<"First occurence of element at index : "<<result.first<<endl;
        cout<<"Last occurence of element at index : "<<result.second<<endl;
    }

    else{
        cout<<"Element not Found !!!";
    }
    
}    

    
   