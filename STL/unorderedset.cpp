#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_set<int>s;

    s.insert(10);
    s.insert(40);
    s.insert(50);
    s.insert(20);
    s.insert(25);
    s.insert(15);

    for(auto it = s.begin(); it != s.end(); it++)
    {
        cout<<*it<<" ";
    }
}