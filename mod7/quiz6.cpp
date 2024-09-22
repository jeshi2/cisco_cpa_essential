#include <iostream>
#include <exception>
#include <stdexcept>
using namespace std;

class X : public logic_error
{
public:
    X() : logic_error("0") {};
};

void z() throw(logic_error)
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
    catch (logic_error &i)
    {
        cout << i.what();
    }
    return 0;
}//execution fail