#include <iostream>
#include <string>
using namespace std;
string fun(string s1, string s2)
{
    return s1 + s2;
}
int main()
{
    string s = "1", *t = &s;
    // insert code here
    cout << fun(*t,"2") << endl;
    return 0;
}