#include<iostream>
using namespace std;
int main()
{
    int money;
    cout<<"how much do you have:";
    cin>>money;
    if(money >= 1000)
    {
        cout<<"Money i have:"<<money<<endl;
        cout<<"Lets have coffee in starbucks"<<endl;
    }
    else if(money>700)
    {
        cout<<"Money I have:"<<money<<endl;
        cout<<"Lets have coffee in CCD"<<endl;
    }
    else if(money>500)
    {
        cout<<"Money I have:"<<money<<endl;
        cout<<"Lets have coffee in normal shop"<<endl;
    }
    else if(money>100)
    {
        
        cout<<"Lets buy sachets and make coffe at home"<<endl;
    }
    else
    {
        cout<<"Lets have tea"<<endl;
    }
    cout<<"Lets go home";
    return 0;
}