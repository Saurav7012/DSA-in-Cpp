#include <iostream>
#include <algorithm>

using namespace std;

string addNumbers(string num1, string num2)
{
    
    int sum, carry=0;
    int index1=num1.size()-1, index2=num2.size()-1;
    string ans;

    while(index2>=0)
    {
        sum=(num1[index1]-'0') + (num2[index2]-'0') + carry;
        carry=sum/10;
        char c= '0' + sum%10;
        ans+=c;
        index1--;
        index2--;
    }

    while(index1>=0)
    {
        sum=num1[index1]-'0'+carry;
        carry=sum/10;
        char c='0' + sum%10;
        ans+=c;
        index1--;
    }

    if(carry)
    {
        ans+='1';
    }

    reverse(ans.begin(), ans.end());

    return ans;
}

int main(){

    string num1, num2, ans;

    cout<<"Enter num1 :";
    cin>>num1;

    cout<<"Enter num2 : ";
    cin>>num2;

    if(num2.size()>num1.size())
    {
        cout<<"SUM : "<<addNumbers(num2,num1);
    }
    else
    {
        cout<<"SUM : "<<addNumbers(num1,num2);
    }
}   