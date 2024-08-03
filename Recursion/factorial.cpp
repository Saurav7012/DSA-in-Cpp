#include <iostream>
using namespace std;

int fact(int N)
{
    if(N==0)
    {
        return 1;
    }
    return N* fact(N-1);
}

int main(){

    int N;
    cout<<"Enter number : ";
    cin>>N;

    if(N<0)
    {
        cout<<"Factorial not possible.";
    }

    cout<<"Factorial : "<<fact(N);
}