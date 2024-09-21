#include <iostream>
using namespace std;
class A
{
    int *val;

public:
    A()
    {
        val = new int;
        *val = 0;
    }
    int get() { return ++(*val); }
};
int main()
{
    A a, b = a;
    cout << a.get() << b.get();
    return 0;
}