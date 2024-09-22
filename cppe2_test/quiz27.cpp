#include <iostream>
using namespace std;
class One
{
public:
    virtual void foo() { cout << 1; } 
};
// insert code here
class Two : public One
{
public:
    void foo() { cout << 2; }
};
class Three : public Two
{
public:
    void foo() { cout << 3; }
};
int main()
{
    One o1;
    Two o2;
    Three o3;
    One *o = &o1;
    o->foo();
    o = &o2;
    o->foo();
    o = &o3;
    o->foo();
}