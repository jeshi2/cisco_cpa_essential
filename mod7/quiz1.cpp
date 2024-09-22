#include <iostream>
#include <exception>
#include <stdexcept>
using namespace std;

class X : public logic_error
{
public:
    X() : logic_error("0") {};
};

void z() throw(X)
{
    throw new logic_error("0");
}

int main(void)
{
    X x;
    try
    {
        z();
    }
    catch (X &i)
    {
        cout << i.what();
    }
    return 0;
}