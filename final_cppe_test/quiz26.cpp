#include <iostream>
#include <string>

using namespace std;

class Uno
{
public:
    Uno() { cout << "X"; }
};

void foo(Uno *d)
{
    Uno e;
    *d = e;
}

int main()
{
    Uno *u = new Uno;
    foo(u);
    delete u;
    return 0;
}