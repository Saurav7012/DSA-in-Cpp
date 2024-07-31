#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    string s;

    cout<<"Enter string : ";
    cin>>s;

    vector<int>alpha(26,0);

    for(int i=0; i<s.size(); i++)
    {
        alpha[s[i]-'a']++;
    }

    string ans;

    for(int i=0; i<alpha.size(); i++)
    {
        while(alpha[i])
        {
            ans+=i+'a';
            alpha[i]--;
        }
    }

    cout<<"Sorted string : "<<ans;    
}