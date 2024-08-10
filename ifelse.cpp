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
    else
    {
        cout<<"Money I have:"<<money<<endl;
        cout<<"Lets have coffee in CCD"<<endl;
    }
    cout<<"Lets go home";
    return 0;
}