#include <iostream>
#include <sstream>
#include <string>
using namespace std;
int main(void)
{
    string s;
    s = "abcd";
    s.append(s);
    s.resize(s.size() / 2);
    cout << s;
    return 0;
}