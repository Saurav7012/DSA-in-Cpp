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

    int start=0, end=N*M-1, mid, row, col;

    while(start<=end)
    {
        mid= start + (end-start)/2;

        row=mid/M;
        col=mid%M;

        if(matrix[row][col]==K)
        {
            cout<<"PRESENT";
            return 0;
        }
        else if(matrix[row][col]>K)
        {
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
    }  
    cout<<"ABSENT";
}    
   