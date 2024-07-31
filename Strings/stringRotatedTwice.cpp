#include <iostream>

using namespace std;

void rotateClockwise(string &s)
{
    char c=s[s.size()-1];
    int index=s.size()-2;

    while(index>=0)
    {
        s[index+1]=s[index];
        index--;
    }
    s[0]=c;
}

void rotateAntiClockwise(string &s)
{
    char c=s[0];
    int index=1;

    while(index<s.size())
    {
        s[index-1]=s[index];
        index++;
    }
    s[s.size()-1]=c;
}

int main(){

    string str1, str2;

    cout<<"Enter string : ";
    cin>>str1;

    cout<<"Enter string to check if rotated twice : ";
    cin>>str2;

    string clockwise=str1, anticlockwise=str1;

    rotateClockwise(clockwise);
    rotateClockwise(clockwise);

    if(clockwise==str2)
    {
        cout<<"YES";
        return 0;
    }

    rotateAntiClockwise(anticlockwise);
    rotateAntiClockwise(anticlockwise);

    if(anticlockwise==str2)
    {
        cout<<"YES";
        return 0;
    }

    cout<<"NO";
}