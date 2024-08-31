#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class person
{
    public:
    int age;
    string name;

    bool operator < (const person &other) const
    {
        return age < other.age;
    }
};

int main()
{
    set<person>s;

    person p1, p2, p3;

    p1.name = "Saurav", p1.age = 20;
    p2.name = "Nevil", p2.age = 22;
    p3.name = "Nandana", p3.age = 21;

    s.insert(p1);
    s.insert(p2);
    s.insert(p3);

    for(auto it=s.begin(); it!=s.end(); it++)
    {
        cout<<it -> age<<" "<<it -> name<<endl;
    }

}