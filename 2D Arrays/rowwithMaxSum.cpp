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

    int sum=INT32_MIN, total, index=0;

    for(i=0; i<rows; i++)
    {
        total=0;

        for(j=0; j<cols; j++)
        {
            total+=arr[i][j];
        }

        if(total>sum)
        {
            sum=total;
            index=i;
        }
    }

    cout<<"Row with index "<<index<<" has the Maximum Sum";

}