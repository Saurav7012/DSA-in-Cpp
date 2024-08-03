#include <iostream>
using namespace std;

void upperCase(string &s, int index)
{
    if(index<0)
    {
        return;
    }

    if(s[index]>='a' && s[index]<='z')
    {
        s[index] = s[index] - 'a' + 'A';
    }
    return upperCase(s,index-1);

}
int main(){

    string s;
    cout<<"Enter lowercase string : ";
    cin>>s;

    int size=s.size();

    upperCase(s,size-1);
    cout<<"Uppercase string is \""<<s<<"\".";
}