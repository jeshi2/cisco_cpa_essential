#include <iostream>
using namespace std;

class Alpha
{
public:
    char out() { return 'A'; }
};

class Beta : public Alpha
{
public:
    virtual char out() { return 'B'; }
};

class Gamma : public Beta
{
public:
    char out() { return 'G'; }
};

int main()
{
    Alpha *a = new Alpha();
    Alpha *b = new Beta();
    Alpha *c = new Gamma();
    cout << (a->out()) << (b->out()) << (c->out());
    return 0;
}