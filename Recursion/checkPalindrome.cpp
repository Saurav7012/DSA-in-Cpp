#include <iostream>
using namespace std;

bool checkPalindrome(string s, int start, int end)
{
    if(start>=end)
    {
        return true;
    }

    if(s[start]!=s[end])
    {
        return false;
    }
    return checkPalindrome(s,start+1,end-1);
}

int main(){

    string s;
    cout<<"Enter string : ";
    cin>>s;

    int start=0;
    int end=s.size()-1;

    if(checkPalindrome(s,start,end))
    {
        cout<<"The string is a Palindrome.";
    }
    else
    {
        cout<<"The string is not a Palindrome.";
    }
}