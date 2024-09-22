#include <iostream>
using namespace std;

class X1
{
public:
    virtual void foo() = 0;
};

class X2 : public X1
{
public:
    virtual void foo() { cout << "X2"; }
};

class X3 : public X1
{
public:
    virtual void foo() { cout << "X3"; }
};

int main()
{
    X1 *a = new X2(), *b = new X3();
    b->foo();
    a->foo();
    return 0;
}