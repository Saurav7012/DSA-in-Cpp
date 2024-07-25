#include <iostream>

using namespace std;

int main(){

    int size, i, flag, n, count=0;

    cout<<"Enter size of Array : ";

    cin>>size;

    int arr[1000];

    for(i=0; i<size ;i++)
    {
        cin>>arr[i];    
    }

    cout<<"Enter element to be searched : ";
    cin>>n;

    for(i=0; i<size;i++)
    {
        if(arr[i]==n)
        {
            flag=1;
            break;
        }
        else{
            flag=0;
            count+=1;
        }
    }
    if (flag==1)
    {
        cout<<"PRESENT at index "<<count;
    }
    else{
        cout<<"ABSENT";
    }
}
    