#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void parenthesis(int N, int left, int right, vector<string>&ans, string &temp)
{
    if(left==N && right==N)
    {
        ans.push_back(temp);
        return;
    }

    if(left < N)
    {
        temp.push_back('(');
        parenthesis(N, left+1, right, ans, temp);
        temp.pop_back();
    }
    if(right < left)
    {
        temp.push_back(')');
        parenthesis(N, left, right+1, ans, temp);
        temp.pop_back();
    }
}

int main(){

    int N;
    cout<<"Enter value for N : ";
    cin>>N;

    vector<string>ans;
    string temp;

    parenthesis(N, 0, 0, ans, temp);

    for(int i=0; i<ans.size(); i++)
    {
        cout<<ans[i]<<endl;
    }
}