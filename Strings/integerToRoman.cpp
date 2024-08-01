#include <iostream>

using namespace std;

string roman(int s)
{
    if(s==0)
    {
        return "";
    }
    else if (s==1)
    {
        return "I";
    }
    else if(s==2)
    {
        return "II";
    }
    else if(s==3)
    {
        return "III";
    }
    else if(s==4)
    {
        return "IV";
    }
    else if(s==5)
    {
        return "V";
    }
    else if(s==6)
    {
        return "VI";
    }
    else if(s==7)
    {
        return "VII";
    }
    else if(s==8)
    {
        return "VIII";
    }
    else if(s==9)
    {
        return "IX";
    }
    else if(s==10)
    {
        return "X";
    }
    else if(s==20)
    {
        return "XX";
    }
    else if(s==30)
    {
        return "XXX";
    }
    else if(s==40)
    {
        return "XL";
    }
    else if(s==50)
    {
        return "L";
    }
    else if(s==60)
    {
        return "LX";
    }
    else if(s==70)
    {
        return "LXX";
    }
    else if(s==80)
    {
        return "LXXX";
    }
    else if(s==90)
    {
        return "XC";
    }
    else if(s==100)
    {
        return "C";
    }
    else if(s==200)
    {
        return "CC";
    }
    else if(s==300)
    {
        return "CCC";
    }
    else if(s==400)
    {
        return "CD";
    }
    else if(s==500)
    {
        return "D";
    }
    else if(s==600)
    {
        return "DC";
    }
    else if(s==700)
    {
        return "DCC";
    }
    else if(s==800)
    {
        return "DCCC";
    }
    else if(s==900)
    {
        return "CM";
    }
    else if(s==1000)
    {
        return "M";
    }
    else if(s==2000)
    {
        return "MM";
    }
    else
    {
        return "MMM";
    }
}    
int main(){

    int N;

    cout<<"Enter Integer : ";
    cin>>N;

    int thousands, hundreds, tens, ones;

    thousands=(N%10000)-(N%1000);
    hundreds=(N%1000)-(N%100);
    tens=(N%100)-(N%10);
    ones=(N%10);

    cout<<roman(thousands)+roman(hundreds)+roman(tens)+roman(ones);

}