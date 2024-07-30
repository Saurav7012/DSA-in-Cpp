#include <iostream>

using namespace std;

int main(){

    int arr[100][100], rows, cols, i, j;

    cout<<"Enter number of rows & cols : ";

    cin>>rows>>cols;

    cout<<"Enter the elements : ";

    for(i=0; i<rows; i++)
    {
        for(j=0; j<cols; j++)
        {
            cin>>arr[i][j];
        }
    }

    int top=0, left=0, right=cols-1, bottom=rows-1;

    cout<<"SPIRAL PRINTING :";

    while(top<=bottom && left<=right)
    {
        for(j=left; j<=right; j++)
        {
            cout<<arr[top][j]<<" ";
        }
        top++;

        for(i=top; i<=bottom; i++)
        {
            cout<<arr[i][right]<<" ";
        }
        right--;
        
        if(top<=bottom)
        {
            for(j=right; j>=left; j--)
            {
                cout<<arr[bottom][j]<<" ";
            }
            bottom--;
        }

        if(left<=right)
        {
            for(i=bottom; i>=top; i--)
            {
                cout<<arr[i][left]<<" ";
            }
            left++;
        }
    }
}