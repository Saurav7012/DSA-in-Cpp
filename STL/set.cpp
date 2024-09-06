#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int>s;

    s.insert(10);
    s.insert(40);
    s.insert(50);
    s.insert(20);
    s.insert(25);
    s.insert(15);
    s.erase(40);

    for(auto it=s.begin(); it!=s.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;

    if(s.find(20) != s.end())
    {
        cout<<"Present";
    }
    else
    {
        cout<<"Absent";
    }
    cout<<endl;

    if(s.count(60))
    {
        cout<<"Present";
    }
    else
    {
        cout<<"Absent";
    }
}