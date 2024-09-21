#include <iostream>
using namespace std;

class A
{
public:
    A() : val(0) {}
    int val;
    virtual void run() { cout << val; }
};

class B : public A
{
};

class C : public B
{
public:
    void run() { cout << val + 2; }
};

void Do(A *a)
{
    B *b;
    C *c;
    if (b = dynamic_cast<B *>(a))
        b->run();
    if (c = dynamic_cast<C *>(a))
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