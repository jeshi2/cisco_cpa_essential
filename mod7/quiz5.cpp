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
}
int main(void)
{
    try
    {
        f(2);
        cout << 0;
    }
    catch (E *)
    {
        cout << 1;
    }
    catch (E)
    {
        cout << 2;
    }
    return 0;
}