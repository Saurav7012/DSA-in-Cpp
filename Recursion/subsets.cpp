#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void subsets(int arr[], int index, int size, vector<vector<int> >&ans, vector<int>&temp )
{
    if(index == size)
    {
        ans.push_back(temp);
        return;
    }
    subsets(arr, index+1, size, ans, temp);
    temp.push_back(arr[index]);
    subsets(arr, index+1, size, ans, temp);
    temp.pop_back();
}

int main(){

    int arr[100], size;
    cout<<"Enter number of elements : ";
    cin>>size;

    cout<<"Enter the elements : ";
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }

    vector<vector<int> >ans;
    vector<int>temp;

    subsets(arr, 0, size, ans, temp);

    cout<<"Subsets are given below."<<endl;

    for(int i=0; i<ans.size(); i++)
    {
        for(int j=0; j<ans[i].size(); j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}