#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<int, int>m;

    m.insert(make_pair(10, 100));
    m.insert(make_pair(20, 200));
    m.insert(make_pair(50, 500));
    m.insert(make_pair(30, 300));
    m.insert(make_pair(80, 800));
    m.insert(make_pair(70, 700));
    m.insert(make_pair(90, 900));

    m[40] = 400;

    for(auto it = m.begin(); it != m.end(); it++)
    {
        cout<<it -> first<<" "<<it -> second<<endl;
    }


}