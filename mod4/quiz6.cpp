#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s = "AB";
    s.append(s).push_back(s[s.length() - 1]);
    cout << s;
}