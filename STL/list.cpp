#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//push_front
//push_back
//pop_front
//pop_back

int main()
{
    list<int>l;

    l.push_back(20);
    l.push_back(50);
    l.push_front(10);
    l.push_front(60);
    l.push_front(70);

    for(auto it = l.begin(); it!=l.end(); it++)
    {
        cout<<*it<<" ";
    }

    cout<<endl;

    for(auto it = l.rbegin(); it!=l.rend(); it++)
    {
        cout<<*it<<" ";
    }

}   