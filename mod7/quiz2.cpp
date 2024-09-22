#include <iostream>
using namespace std;

class X
{
public:
    X(void) { cout << 0; }
    ~X(void) { cout << 2; }
};

int main(void)
{
    try
    {
        X *x = new X();
        throw true;
        delete x;
    }
    catch (bool s)
    {
        cout << s;
    }
    return 0;
}