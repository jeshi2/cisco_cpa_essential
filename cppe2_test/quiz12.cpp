#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1 = "foo";
    string s2;
    getline(cin, s2);
    cout << s2.append(s1);
    return (0);
}