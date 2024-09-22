#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1 = "top";
    string s2;

    s2.append(s1).append("down");

    cout << s2;
    return (0);
}