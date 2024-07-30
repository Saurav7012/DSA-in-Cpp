#include <iostream>

using namespace std;

int main(){

    int arr[100][100], rows, cols, i, j;

    cout<<"Enter number of rows & cols : ";

    cin>>rows>>cols;

    for(i=0; i<rows; i++)
    {
        for(j=0; j<cols; j++)
        {
            cin>>arr[i][j];
        }
    }

    for(i=0; i<cols; i++)
    {
        if(i%2==0)
        {
            for(j=0;j<rows;j++)
            {
                cout<<arr[j][i]<<" ";
            }
        }
        else
        {
            for(j=rows-1;j>=0;j--)
            {
                cout<<arr[j][i]<<" ";
            }
        }
    }
}    