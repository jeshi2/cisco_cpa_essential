#include <iostream>
using namespace std;

class X
{
public:
    void shout() { cout << "x"; }
};

class Y : public X
{
};

class Z : public Y
{
public:
    void shout() { cout << "z"; }
};

int main()
{
    Z *z = new Z();
    static_cast<Y *>(z)->shout();
    return 0;
}