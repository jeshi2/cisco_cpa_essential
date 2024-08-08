#include<iostream>
using namespace std;
int main()
{
    int money,age;
    cout<<"How much you have: ";
    cin>>money;
    cout<<"enter age:"<<endl;
    cin>>age;
    if((money>=1000) && (age>15))
        cout<<"coffee in Starbucks"<<endl;
        //cout<<"it was good";
    
    cout<<"lets go home";
    return 0;
}