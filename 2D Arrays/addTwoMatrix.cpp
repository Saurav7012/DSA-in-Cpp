#include <iostream>

using namespace std;

int main(){

    int arr1[100][100], arr2[100][100], arr3[100][100], rows1, cols1, rows2, cols2, i, j;

    cout<<"Enter number of rows and cols of Matrix 1 : ";

    cin>>rows1>>cols1;

    cout<<"Enter number of rows and cols of Matrix 2 : ";

    cin>>rows2>>cols2;

    if(rows1!=rows2 || cols1!=cols2)
    {
        cout<<"Invalid !!!";
        return 0;
    }

    cout<<"Enter elements of Matrix 1 : ";

    for(i=0; i<rows1; i++)
    {
        for(j=0; j<cols1; j++)
        {
            cin>>arr1[i][j];
        }
    }

    cout<<"Enter elements of Matrix 2 : ";

    for(i=0; i<rows2; i++)
    {
        for(j=0; j<cols2; j++)
        {
            cin>>arr2[i][j];
        }
    }

    for(i=0; i<rows1; i++)
    {
        for(j=0; j<cols1; j++)
        {
            arr3[i][j]=arr1[i][j]+arr2[i][j];
        }
    }

    for(i=0; i<rows1; i++)
    {
        for(j=0; j<cols1; j++)
        {
            cout<<arr3[i][j]<<" ";
        }
        cout<<endl;
    }
}