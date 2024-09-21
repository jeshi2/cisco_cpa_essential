#include <iostream>
using namespace std;
class A
{
public:
    A() : val(0) {}
    int val;
    void run() { cout << val; }
};
class B : public A
{
public:
    virtual void run() { cout << val + 2; }
};
class C : public B
{
};
void Do(A *a)
{
    B *b;
    C *c;
    if (b = static_cast<B *>(a))
        b->run();
    if (c = dynamic_cast<C *>(b))
        c->run();
    a->run();
}
int main()
{
    A *a = new C();
    ;
    Do(a);
    return 0;
}