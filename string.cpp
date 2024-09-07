#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char f_name[20];
    char l_name[20];
    char full_name[50];
    //cout<<f_name;

    // cout<<"Enter your first name: ";
    // cin>>f_name;
    // cout<<"Enter your last name: ";
    // cin>>l_name;
    // cout<<"Hi "<<f_name<<" your first name has "<<strlen(f_name)<<" characters "<<endl
    // <<" and your last name has "<<strlen(l_name)<<" characters."<<endl;

    // strcpy(full_name,f_name);
    // strcat(full_name," ");
    // strcat(full_name,l_name);

    // if((strcmp(f_name,l_name))==0)
    // {
    //     cout<<"both string are equal";
    // }
    // else {
    //     cout<<"not equal";
    // }

    // cout<<full_name;

    cout<<"enter full name: ";
    cin.getline(full_name,50);
    cout<<full_name;

    // toupper()

    return 0;
}