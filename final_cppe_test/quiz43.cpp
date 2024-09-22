#include <iostream>
using namespace std;

class Sup
{
public:
    virtual void out() { cout << "p"; }
};

class Sub : public Sup
{
public:
    virtual void out() { cout << "b"; }
};

int main()
{
    Sub sub;
    Sup *sup;

    sup = &sub;

    sup->out();
    sub.out();

    return 0;
}