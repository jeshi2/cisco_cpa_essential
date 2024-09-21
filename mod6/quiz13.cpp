#include <iostream>
using namespace std;

class X
{
public:
    virtual void shout() { cout << "X"; }
};

class Y : public X
{
public:
    void shout() { cout << "Y"; }
};

class Z : public Y
{
public:
    void shout() { cout << "Z"; }
};

int main()
{
    Z *z = new Z();
    static_cast<Y *>(z)->shout();
    return 0;
}