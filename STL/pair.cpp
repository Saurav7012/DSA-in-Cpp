#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//name, age, weight

int main()
{
    pair<string, pair<int, int>>p;

    // p = make_pair("Rohit", make_pair(25, 80));

    p.first = "Saurav";
    p.second.first = 21;
    p.second.second = 50;

    cout<<p.first<<endl;
    cout<<p.second.first<<endl;
    cout<<p.second.second;

}


