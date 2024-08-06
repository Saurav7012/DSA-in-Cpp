#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void find(int N, vector<string>&ans, string &temp, int zero, int one)
{
    if(temp.size() == N)
    {
        ans.push_back(temp);
        return;
    }

    if(zero < one)
    {
        temp.push_back('0');
        find(N, ans, temp, zero+1, one);
        temp.pop_back();
    }
    temp.push_back('1');
    find(N, ans, temp, zero, one+1);
    temp.pop_back();
}

int main(){

    int N;
    cout<<"Enter N value : ";
    cin>>N;

    string temp;
    vector<string>ans;

    find(N, ans, temp, 0, 0);

    for(int i=0; i<ans.size(); i++)
    {
        cout<<ans[i]<<endl;
    }
}