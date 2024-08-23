#include<iostream>
using namespace std;
int main()
{
    /*for(int i=1;i<=10;)
    {
        cout<<"hi mr";
    }*/

    char choice;
    while (1)
    {
        cout<<"hi"<<"\n";
        cout<<"Do you want to continue?(Y/N): ";
        cin>>choice;
        if(choice=='n' || choice=='N')
        {
            break;
        }
    }
    
    return 0;
}