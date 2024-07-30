#include <iostream>

using namespace std;

int main(){

    int height[1000], i, n;

    cout<<"Enter the limit : ";
    cin>>n;

    cout<<"Enter the heights of buildings : ";

    for(i=0; i<n; i++)
    {
        cin>>height[i];
    }

    int rightMax=0, leftMax=0, maxHeight=height[0], index=0, water=0;

    for(i=1;i<n;i++)
    {
        if(maxHeight<height[i])
        {
            maxHeight=height[i];
            index=i;
        }
    }

    for(i=0; i<index; i++)
    {
        if(leftMax>height[i])
        {
            water+=leftMax-height[i];
        }
        else
        {
            leftMax=height[i];
        }
    }

    for(i=n-1; i>index; i--)
    {
        if(rightMax>height[i])
        {
            water+=rightMax-height[i];
        }
        else
        {
            rightMax=height[i];
        }
    }

    cout<<water<<" units of water can be stored";

}    