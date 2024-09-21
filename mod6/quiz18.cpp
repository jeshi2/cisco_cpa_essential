#include <iostream>
using namespace std;
class X
{
};
class Y : public X
{
};
class Z : public X
{
};
int main()
{
    Z *z = new Z();
    X *x = new X();
    x = z;
    cout << (x == z);
    return 0;
}