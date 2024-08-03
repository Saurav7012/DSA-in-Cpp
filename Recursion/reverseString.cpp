#include <iostream>
using namespace std;

void reverseString(string &s, int start, int end)
{
    if(start>=end)
    {
        return;
    }

    char c = s[start];
    s[start] = s[end];
    s[end] = c;
    return reverseString(s,start+1,end-1);

}

int main(){

    string s;
    cout<<"Enter string : ";
    cin>>s;

    int start = 0;
    int end = s.size()-1;

    reverseString(s,start,end);

    cout<<"Reversed string is "<<s<<".";
}