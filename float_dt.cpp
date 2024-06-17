#include<iostream>
#include<iomanip>
#include<limits>

using namespace std;

int main()
{
    float x=3456.123909654f;
    double a=9.12345678901234567890;
    long double aa=999.123456789012314567890123456789L;
    //cout<<setprecision(17);
    cout<<"double a="<<a<<endl;

    //cout<<setprecision(18);
    cout<<"long double aa="<<aa<<endl;
    cout<<"float x="<<x<<endl;
    cout<<numeric_limits<long double>::digits10<<endl;
    return 0;
}