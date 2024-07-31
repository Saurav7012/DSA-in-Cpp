#include <iostream>

using namespace std;

int main(){
    
    int matrix[100][100], i, j, row, col, N;

    cout<<"Enter number of rows and cols: ";
    cin>>row>>col;

    cout<<"Enter the elements : ";

    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            cin>>matrix[i][j];
        }
    }

    cout<<"How much times do you want to rotate ?";
    cin>>N;

    int K=N%4;

    if(K==1)
    {
        for(int i=0; i<col; i++)
        {
            for(int j=row-1;j>=0;j--)
            {
                cout<<matrix[j][i]<<"  ";
            }
            cout<<endl;
        }
    }
    else if(K==2)
    {
        for(i=row-1; i>=0; i--)
        {
            for(j=col-1; j>=0; j--)
            {
                cout<<matrix[i][j]<<"  ";
            }
            cout<<endl;
        }
    }
    else if(K==3)
    {
        for(i=col-1; i>=0; i--)
        {
            for(j=0; j<row; j++)
            {
                cout<<matrix[j][i]<<"  ";
            }
            cout<<endl;
        }
    }    
    else
    {
        for(i=0; i<row; i++)
        {
            for(j=0; j<col; j++)
            {
                cout<<matrix[i][j]<<"  ";
            }
            cout<<endl;
        }
    }
}
