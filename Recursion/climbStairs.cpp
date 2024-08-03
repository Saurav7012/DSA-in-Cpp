#include <iostream>
using namespace std;

int climbStairs(int N)
{
    if (N<=1)
    {
        return 1;
    }
    return climbStairs(N-1) + climbStairs(N-2);
}

int main(){

    int N;
    cout<<"Enter value for N : ";
    cin>>N;

    cout<<"To reach the "<<N<<"th stair, He has "<<climbStairs(N)<<" possible ways.";
}