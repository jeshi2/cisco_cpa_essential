#include <iostream>
using namespace std;

class A
{
public:
    A() : val(0) {}
    int val;
    int inc()
    {
        ++val;
        return val--;
    }
};

void Do(A *a)
{
    a->val = a->inc();
}

int main()
{
    A a;
    Do(&a);
    cout << a.inc();
    return 0;
}