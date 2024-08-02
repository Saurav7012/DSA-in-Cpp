#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int lpsFind(vector<int>&lps, string needle)
{
    int pre=0, suf=1;

    while(suf< needle.size())
    {
        if(needle[pre]==needle[suf])
        {
            lps[suf]=pre+1;
            pre++, suf++;
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
}

int KMP_MATCH(string haystack, string needle)
{
    vector<int>lps(needle.size(),0);
    lpsFind(lps, needle);

    int first=0, second=0;

    while(second<needle.size() && first<haystack.size())
    {
        if(needle[second]==haystack[first])
        {
            first++, second++;
        }
        else
        {
            if(second==0)
            {
                first++;
            }
            else
            {
                second=lps[second-1];
            }
        }
    }

    if(second==needle.size())
    {
        return 1;
    }
    else
    {
        return -1;
    }
}

int stringMatch(string a, string b)
{
    if(a==b)
    {
        return 1;
    }

    string temp=a;
    int repeat=1;

    while(temp.size()<b.size())
    {
        temp+=a;
        repeat++;
    }

    if(KMP_MATCH(temp,b)==1)
    {
        return repeat;
    }

    if(KMP_MATCH(temp+a,b)==1)
    {
        return repeat+1;
    }

    else
    {
        return -1;
    }
}

int main(){

    string a, b;
    cout<<"Enter string : ";
    cin>>b;

    cout<<"Enter string to be repeated : ";
    cin>>a;

    int result=stringMatch(a,b);

    if(result==-1)
    {
        cout<<"This string cannot be formed by repeating the given string.";
    }
    else
    {
        cout<<"This string must be repeated "<<result<<" times.";
    }

}