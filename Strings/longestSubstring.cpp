#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    string s;
    cout<<"Enter string : ";
    cin>>s;

    vector<bool>array(256,0);

    int first=0, second=0, length=0;

    while(second<s.size())
    {
        while(array[s[second]])
        {
            array[s[first]]=0;
            first++;
        }
        array[s[second]]=1;
        length=max(length,second-first+1);
        second++;
    }
    cout<<"Longest substring length is "<<length;
}