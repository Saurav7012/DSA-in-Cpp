#include <iostream>

using namespace std;



int main(){

    int arr[100][100], row, col, i, j, X;

    cout<<"Enter number of rows and Coloumns : ";

    cin>>row>>col;

    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            cin>>arr[i][j];
        }
    }

    cout<<"Enter Element to be Searched : ";

    cin>>X;

    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            if(arr[i][j]==X)
            {
                cout<<"Present";
                return 0;
                break;
            }
        }
    }

    cout<<"Absent";
}