#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    string sentence;

    cout<<"Enter sentence : ";
    getline(cin,sentence);

    vector<bool>alpha(26,0);

    for(int i=0; i<sentence.size(); i++)
    {
        alpha[sentence[i]-'a']=1;
    }

    for(int i=0; i<alpha.size(); i++)
    {
        if(alpha[i]==0)
        {
            cout<<"NOT PANGRAM";
            return 0;
        }
    }
    cout<<"PANGRAM";
}