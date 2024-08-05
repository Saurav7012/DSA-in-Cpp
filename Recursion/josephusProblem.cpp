#include <iostream>
using namespace std;

int findTheWinner(int N, int K)
{
    if(N==0)
    {
        return 0;
    }
    return (findTheWinner(N-1, K) + K) % N;
}


int main(){

    int N, K;

    cout<<"Enter number of persons : ";
    cin>>N;
    cout<<"Enter count number : ";
    cin>>K;
    
    cout<<"The winner is "<<findTheWinner(N,K)<<".";
}