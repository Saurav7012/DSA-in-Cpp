//Assume that there are occurrences greater than N/2

#include <iostream>
using namespace std;

int main(){

    int arr[100], i, N;

    cout<<"Enter the limit : ";
    cin>>N;

    for(i=0; i<N; i++)
    {
        cin>>arr[i];
    }

    int candidate, count=0;

    for(i=0; i<N; i++)
    {
        if(count==0)
        {
            candidate=arr[i];
            count=1;
        }
        else
        {
            if(arr[i]==candidate)
            {
                count++;
            }
            else
            {
                count--;
            }
        }
    }
    cout<<candidate<<" has occured the most times";
}
