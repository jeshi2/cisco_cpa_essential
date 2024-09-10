#include<iostream>
#include<string>
using namespace std;
int main()
{
    string full_name="Jenny'sLectures";

    string f_name {full_name,0,7};
    string l_name = full_name.substr(7,8);
    string formatted_full_name;
    formatted_full_name = f_name + l_name;
    formatted_full_name.insert(7," ");
    cout<<formatted_full_name;
    return 0;
}