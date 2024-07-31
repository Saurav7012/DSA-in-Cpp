#include <iostream>

using namespace std;

int main(){

    string address, ans;

    cout<<"Enter IP address : ";

    cin>>address;

    int index=0;

    while(index<address.size())
    {
        if(address[index]=='.')
        {
            ans+="[.]";
        }
        else
        {
            ans+=address[index];
        }
        index++;
    }

    cout<<"Defanged IP address : "<<ans;
}