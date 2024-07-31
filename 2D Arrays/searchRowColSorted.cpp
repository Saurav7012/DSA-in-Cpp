#include <iostream>

using namespace std;

int main(){

    int matrix[100][100], N, M, K, i,j;

    cout<<"Enter number of rows and cols: ";
    cin>>N>>M;

    cout<<"Enter the elements : ";

    for(i=0; i<N; i++)
    {
        for(j=0; j<M; j++)
        {
            cin>>matrix[i][j];
        }
    }

    cout<<"Enter element to be Searched : ";
    cin>>K;

    i=0; j=M-1;

    while(i<N && j>=0)
    {
        if(matrix[i][j]==K)
        {
            cout<<"PRESENT";
            return 0;
        }
        else if(matrix[i][j]>K)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    cout<<"ABSENT";
    return 0;
}