#include<iostream>
using namespace std;
int main()
{
    int money, partner_age;
    cout<<"enter money: ";
    cin>>money;

    if(money >= 1000)
    {
        cout<<"enter patner age: ";
        cin>>partner_age;
        if (partner_age>21)
        {
            cout<<"lets have wine";
        }
        else {
            cout<<"lets have coffee";
        }
    }
    else
    {
        if (money>500)
        {
            cout<<"coffee in CCD";
        }
        else {
            cout<<"coffee in normal shop";
        }
    }
    cout<<"Lets go home";
    return 0;
}