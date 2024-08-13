#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"enter your choice: ";
    cin>>ch;
    switch (ch)
    {
        default:
        cout<<"enter valid choice.";
        break;
    case 'a':
        cout<<"I wanna know my balance.";
        break;
    case 'A':
        cout<<"I wanna register a complaint.";
        break;
    case 'J':
        cout<<"I wanna talk to cutomer care executive.";
        break;

    }
    cout<<"\n end of switch case.";
    return 0;
}