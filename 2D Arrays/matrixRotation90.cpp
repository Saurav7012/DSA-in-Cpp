#include <iostream>

using namespace std;

int main(){

    int matrix[100][100], i, j, row, col;

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

    for(i=0; i<col; i++)
    {
        for(j=row-1;j>=0;j--)
        {
            cout<<matrix[j][i]<<"  ";
        }
        cout<<endl;
    }
}