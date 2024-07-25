#include <iostream>

using namespace std;

int main(){

    int N, i, sum1=0, sum2=0;

    cout<<"Enter N: ";   //3

    cin>>N;      

    int arr[1000];

    for(i=0; i<(N-1) ;i++)
    {
        cin>>arr[i];    
    }

    for(i=0; i<(N-1) ;i++)
    {
        sum1+=arr[i];    
    }

    for(i=1; i<=N ;i++)
    {
        sum2+=i;
    }

    cout<<"Missing Number : "<<(sum2-sum1);

}