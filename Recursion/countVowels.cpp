#include <iostream>
using namespace std;

int countVowels(string s, int index)
{
    if(index==-1)
    {
        return 0;
    }

    if(s[index]=='a' || s[index]=='e' || s[index]=='i' || s[index]=='o' || s[index]=='u')
    {
        return 1 + countVowels(s,index-1);
    }
    else
    {
        return countVowels(s,index-1);
    }
}

int main(){

    string s;
    cout<<"Enter string : ";
    cin>>s;

    int size=s.size();

    cout<<"The string \""<<s<<"\" has "<<countVowels(s,size-1)<<" vowels.";
}