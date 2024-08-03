#include <iostream>
using namespace std;

int sumN(int N)
{
    if(N==1)
    {
        return 1;
    }
    return N+sumN(N-1);
}

int main(){

    int N;
    cout<<"Enter the limit : ";
    cin>>N;

    if(N<0)
    {
        cout<<"Invalid input! Please enter a positive integer."<<endl;
        return 0;
    }
    cout<<"Sum of first "<<N<<" natural numbers is "<<sumN(N)<<"."<<endl;
}