#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s1 = "brick";
    string s2 = "block";
    string s;
    s1.swap(s2);
    s2.swap(s);
    s.swap(s2);
    cout << s1;
}