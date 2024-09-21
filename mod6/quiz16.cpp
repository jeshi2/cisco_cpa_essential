#include <iostream>
using namespace std;

class X
{
public:
    void shout() { cout << "x"; }
};

class Y : public X
{
public:
    void shout() { cout << "y"; }
};

int main()
{
    X *x = new Y();
    static_cast<Y *>(x)->shout();
    return 0;
}