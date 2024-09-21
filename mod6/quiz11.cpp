#include <iostream>
using namespace std;

class A
{
public:
    A() : val(0) {}
    int val;
    void inc() { ++val; }
};

void Do(A a)
{
    a.inc();
}

int main()
{
    A a;
    Do(a);
    a.inc();
    cout << a.val;
    return 0;
}