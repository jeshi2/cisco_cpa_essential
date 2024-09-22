#include <iostream>
using namespace std;
class A
{
public:
    void out() { cout << "A"; }
};
class B : public A
{
public:
    void out() { cout << "B"; }
};
int main()
{
    A *a;
    a = new A();
    a->out();
    a = new B();
    a->out();
    return 0;
}