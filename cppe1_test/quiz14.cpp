#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s = "123";
    s.append(s.substr(2)).push_back(s[s.length() - 2]);
    cout << s;
}