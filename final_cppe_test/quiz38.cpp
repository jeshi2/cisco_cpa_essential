#include <iostream>
#include <string>
using namespace std;

class One
{
public:
    float f;
    One(float f) { this->f = f; }
};

class Two
{
public:
    float f;
    Two(One o) { this->f = o.f; }
    void foo() { cout << (int)f; }
};

int main()
{
    One o1(3.14);
    Two o2 = o1;
    o2.foo();
}