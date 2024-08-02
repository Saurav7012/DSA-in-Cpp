#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int makeStringPalindrome(string s)
{
    vector<int>lps(s.size(),0);
    int pre=0, suf=1;

    while(suf<s.size())
    {
        if(s[pre]==s[suf])
        {
            lps[suf]=pre+1;
            pre++;
            suf++;
        }
        else
        {
            if(pre==0)
            {
                lps[suf]=0;
                suf++;
            }
            else
            {
                pre=lps[pre-1];
            }
        }
    }
    return lps[s.size()-1];
}

int main(){

    string s;
    cout<<"Enter string : ";
    cin>>s;

    string p=s;
    string r;
    int size=s.size();
    string rev= s;
    reverse(rev.begin(),rev.end());
    s+='$';
    s+=rev;

    int charAdd = size - makeStringPalindrome(s);

    cout<<"characters to be added is "<<charAdd<<endl;

    for(int i=0; i<charAdd; i++)
    {
        r+=p[p.size()-i-1];
    }

    r+=p;

    cout<<"Palindrome made after Adding : "<<r;
}