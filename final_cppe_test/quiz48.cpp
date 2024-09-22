#include <iostream>
#include <string>
using namespace std;
class Class1
{
    char a;

protected:
    char b;

public:
    char c;
    Class1()
    {
        a = 'a';
        b = 'b';
        c = 'c';
    }
};
class Class2 : public Class1
{
    char d;

public:
    void set()
    {
        c = 'e';
        d = 'd';
    }
};
int main()
{
    Class2 a;
    a.set();
    cout << a.c << a.d;
    return 0;
}