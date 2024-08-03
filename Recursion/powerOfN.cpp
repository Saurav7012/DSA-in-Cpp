#include <iostream>
using namespace std;

int powerN(int N, int P)
{
    if(P==0)
    {
        return 1;
    }
    return N * powerN(N,P-1);
}

int main(){

    int N,P;
    cout<<"Enter Number : ";
    cin>>N;
    cout<<"Enter Power :";
    cin>>P;

    cout<<N<<" raised to "<<P<<" is "<<powerN(N,P)<<".";
}