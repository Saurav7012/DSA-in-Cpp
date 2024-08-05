#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void permut(vector<int>&arr, vector<vector<int> >&ans, int index)
{
    if(index == arr.size())
    {
        ans.push_back(arr);
        return;
    }
    for(int i=index; i<arr.size(); i++)
    {
        swap(arr[i], arr[index]);
        permut(arr, ans, index+1);
        swap(arr[i], arr[index]);
    }
}

int main(){

    int size;

    cout<<"Enter number of elements : ";
    cin>>size;

    vector<int>arr(size);
    vector<vector<int> >ans;

    cout<<"Enter the elements : ";
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }

    permut(arr, ans, 0);
    
    for(int i=0; i<ans.size(); i++)
    {
        for(int j=0; j<ans[i].size(); j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}
