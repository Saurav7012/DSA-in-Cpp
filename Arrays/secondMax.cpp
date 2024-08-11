#include <iostream>
using namespace std;

int main(){

    int size, i, ans, flag;
    cout<<"Enter size of Array : ";
    cin>>size;
    int arr[1000];

    for(i=0; i<size ;i++)
    {
        cin>>arr[i];    
    }

    ans=INT32_MIN;

    for(i=0;i<size;i++)
    {
        if(arr[i]>ans)
        {
            ans=arr[i];
        }
    }

    flag=ans;

    ans=INT32_MIN;

    for(i=0;i<size;i++)  
    {
        if(flag!=arr[i])  
        {
            ans=max(ans,arr[i]);
        }
    }
    cout<<"SECOND MAX : "<<ans;
}
