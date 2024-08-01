#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    int N;
    cout<<"Enter Number : ";
    cin>>N;

    vector<int>ans(1,1);

    while(N>1)
    {
        int carry=0, size=ans.size(), res;

        for(int i=0; i<size; i++)
        {
            res= ans[i]*N + carry;
            ans[i]= res%10;
            carry= res/10;
        }

        while(carry)
        {
            ans.push_back(carry%10);
            carry/=10;
        }
        N--;
    }

    cout<<"Factorial : ";

    for(int i=ans.size()-1; i>=0; i--)
    {
        cout<<ans[i];
    }
}