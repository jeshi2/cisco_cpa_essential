#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str = "Hi, Antony Evans, Hi";
    // string ::iterator it;
    // for (it = str.begin(); it != str.end(); it++)
    // {
    //     cout << *it;
    // }
    // cout<<endl;
    // cout<<str.substr(3,2);
    cout<<str.find("Hi",1);
    
    // str += " How are you?";
    // str.append("How are you?");
    // for (it = str.begin(); it != str.end(); it++)
    // {
    //     cout << *it;
    // }
    // cout<<endl;

    // cout << "size of str is: " << str.size() << "\n";
    // cout << "length of str is: " << str.length() << "\n";
    // cout << "capacity of str is: " << str.capacity() << "\n";
    // cout << "max_size of str is: " << str.max_size() << "\n";

    return 0;
}