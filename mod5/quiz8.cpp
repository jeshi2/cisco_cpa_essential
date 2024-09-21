#include <iostream>
#include <string>
using namespace std;
class A
{
public:
    string a(string b)
    {
        return b.substr(0, 2);
    }
};
class B
{
public:
    string a(string b)
    {
        return b.substr(2, 2);
    }
};
int main()
{
    A a;
    B b;
    cout << a.a(b.a("ABCD"));
    return 0;
}