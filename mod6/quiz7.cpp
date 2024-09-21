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
    Y *y = new Z();
    dynamic_cast<X *>(y)->shout();
    return 0;
}