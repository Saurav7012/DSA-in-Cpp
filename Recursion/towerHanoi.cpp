#include <iostream>
using namespace std;

void towerOfHanoi(int N, int sour, int help, int dest)
{
    if(N==1)
    {
        cout<<"Move disk "<<N<<" from "<<sour<<" to "<<dest<<endl;
        return ;
    }
    towerOfHanoi(N-1, sour, dest, help);
    cout<<"Move disk "<<N<<" from "<<sour<<" to "<<dest<<endl;
    towerOfHanoi(N-1, help, dest, sour);
}

int main(){
    
    int N;
    cout<<"Enter number of disk's : ";
    cin>>N;
    cout<<"Follow the procedure given below."<<endl;
    towerOfHanoi(N, 1, 2, 3);
}