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


int strMatching(string haystack, string needle, vector<int>lps)
{
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
        return first-second;
    }
    else
    {
        return -1;
    }
}


int main(){

    string haystack, needle;

    cout<<"Enter string :";
    cin>>haystack;
    cout<<"Enter substring : ";
    cin>>needle;

    vector<int>lps(needle.size(),0);
    lpsFind(lps, needle);

    cout<<"Index : "<<strMatching(haystack,needle,lps);
}