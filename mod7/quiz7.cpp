#include <iostream>
#include <exception>
#include <stdexcept>
using namespace std;

class X : public domain_error
{
public:
    X() : domain_error("0") {};
};

void z() throw(X)
{
    X x;
    throw x;
    cout << 1;
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
        cout << 1;
    }
    catch (domain_error &i)
    {
        cout << 0;
    }
    return 0;
}//execution fails