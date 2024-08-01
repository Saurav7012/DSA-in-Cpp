#include <iostream>

using namespace std;

int Num(char c)
{
    if(c=='I')
    {
        return 1;
    }
    if(c=='V')
    {
        return 5;
    }
    if(c=='X')
    {
        return 10;
    }
    if(c=='L')
    {
        return 50;
    }
    if(c=='C')
    {
        return 100;
    }
    if(c=='D')
    {
        return 500;
    }
    else
    {
        return 1000;
    }
}

int main(){

    string s;

    cout<<"Enter ROMAN Number : ";
    cin>>s;

    int sum=0;

    for(int i=0; i<s.size()-1; i++)
    {
        if(Num(s[i])<Num(s[i+1]))
        {
            sum-=Num(s[i]);
        }
        else
        {
            sum+=Num(s[i]);
        }
    }

    sum+=Num(s[s.size()-1]);

    cout<<"Integer Value : "<<sum;
}