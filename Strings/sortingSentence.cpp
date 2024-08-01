#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    string s;

    cout<<"Enter the sentence : ";
    getline(cin,s);

    vector<string>sorting(10,"");

    string temp;
    int count=0;

    for(int i=0; i<s.size(); i++)
    {
        if(s[i]==' ')
        {
            int ans=temp[temp.size()-1]-'0';
            temp.pop_back();
            sorting[ans]=temp;
            temp.clear();
            count++;
        }
        else
        {
            temp+=s[i];
        }
    }
    int ans=temp[temp.size()-1]-'0';
    temp.pop_back();
    sorting[ans]=temp;
    temp.clear();
    count++;

    for(int i=1; i<=count; i++)
    {
        temp+=sorting[i];
        temp+=' ';
    }
    temp.pop_back();

    cout<<"Sorted Sentence : "<<temp;
}