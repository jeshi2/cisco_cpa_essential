#include <iostream>
#include <string>
using namespace std;

class X
{
public:
    X(void) { cout << 1; }
    ~X(void) { cout << 2; }
};

void exec()
{
    {
        X x;
    }
    throw string("0");
}

int main(void)
{
    try
    {
        exec();
    }
    catch (string &s)
    {
        cout << s;
    }

    return 0;
}