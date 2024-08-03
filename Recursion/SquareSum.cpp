#include <iostream>
using namespace std;

int squareSum(int N)
{
    if(N==1)
    {
        return 1;
    }
    return N*N + squareSum(N-1);
}

int main(){

    int N;
    cout<<"Enter the limit : ";
    cin>>N;

    cout<<"Sum of squares of first "<<N<<" numbers is "<<squareSum(N);
}