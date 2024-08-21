#include<iostream>
using namespace std;
int main()
{
    char choice;
    do
    {
        float l,b,area=0;
        cout<<"enter length and breadth separated by space: ";
        cin>>l>>b;

        area=l*b;

        cout<<"area is "<<area<<endl;
        cout<<"want to continue (Y/N)?";
        cin>>choice;
    } while (choice == 'y' || choice == 'Y');

    cout<<"out of the loop"<<endl;
    return 0;
    
}