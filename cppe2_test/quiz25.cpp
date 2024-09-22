#include <iostream>
using namespace std;

class SupClass
{
public:
    void show(int par) { cout << par + 1; }
};

class SubClass : public SupClass
{
public:
    void show(float par) { cout << par + 2; }
};

int main()
{
    SubClass o;
    o.show(2.0);
}