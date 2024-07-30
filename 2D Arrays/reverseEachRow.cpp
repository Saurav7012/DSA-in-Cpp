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

    cout<<"Orginal Matrix :"<<endl;

    for(i=0; i<rows; i++)
    {
        for(j=0; j<cols; j++)
        {
            cout<<arr[i][j]<<"  ";
        }
        cout<<endl;
    }

    cout<<"Reversed Row Matrix :"<<endl;

    for(i=0; i<rows; i++)
    {
        for(j=cols-1; j>=0;j--)
        {
            cout<<arr[i][j]<<"  ";
        }
        cout<<endl;
    }

}    