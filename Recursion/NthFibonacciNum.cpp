#include <iostream>
using namespace std;

int fibN(int N)
{
    if (N==0 || N==1)
    {
        return N;
    }
    return fibN(N-1) + fibN(N-2);
}

int main(){

    int N;
    cout<<"Enter value for N : ";
    cin>>N;

    cout<<N<<"th"<<" fibonacci number is "<<fibN(N)<<".";
}