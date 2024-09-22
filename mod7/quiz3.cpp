#include <iostream>
#include <exception>
#include <stdexcept>
using namespace std;

class E
{
};

void f(int i)
{
    E e;
    switch (i)
    {
    case 0:
        throw e;
    case 1:
        throw &e;
    }
    cout << 0;
}

int main(void)
{
    try
    {
        f(1);
    }
    catch (void *)
    {
        cout << 2;
    }
    catch (E *)
    {
        cout << 1;
    }
    return 0;
}//compilation fails