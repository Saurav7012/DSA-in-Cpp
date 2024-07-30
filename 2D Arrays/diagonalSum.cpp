#include <iostream>

using namespace std;

int main(){

    int arr[100][100], rows, cols, i, j;

    cout<<"Enter number of rows & cols : ";

    cin>>rows>>cols;

    if(rows!=cols)
    {
        cout<<"Diagonals not present !!!";
        return 0;
    }

    for(i=0; i<rows; i++)
    {
        for(j=0; j<cols; j++)
        {
            cin>>arr[i][j];
        }
    }

    int sum1=0, sum2=0;

    for(i=0; i<rows; i++)
    {
        sum1+=arr[i][i];
    }


    for(i=0; i<rows; i++)
    {
        j=rows-i-1;
        sum2+=arr[i][j];
    }
    
    cout<<"Diagonal 1 SUM : "<<sum1<<endl;
    cout<<"Diagonal 2 SUM : "<<sum2;


}    