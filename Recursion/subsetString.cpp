#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void subsetString(string s, int index, int size, vector<string>&ans, string &temp)
{
    if(index == size)
    {
        ans.push_back(temp);
        return ;
    }
    subsetString(s, index+1, size, ans, temp);
    temp.push_back(s[index]);
    subsetString(s, index+1, size, ans, temp);
    temp.pop_back();
}

int main(){

    string s;
    cout<<"Enter string : ";
    cin>>s;

    vector<string>ans;
    string temp;

    subsetString(s, 0, s.size(), ans, temp);

    for(int i=0; i<ans.size(); i++)
    {
        cout<<ans[i]<<endl;
    }
}