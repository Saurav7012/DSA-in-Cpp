#include <iostream>
using namespace std;

void printEven(int N)
{
    if(N==2)
    {
        cout<<N<<endl;
        return;
    }
    printEven(N-2);
    cout<<N<<endl;
}
int main()
{
    int N;
    cout<<"Enter the limit : ";
    cin>>N;

    if(N%2==1)
    {
        N--;
    }
    printEven(N);
}