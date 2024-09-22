#include <iostream>
using namespace std;
class Uno
{
public:
    void foo() { cout << "0"; }
    void bar() { cout << "1"; }
};
class Due : public Uno
{
public:
    void foo() { cout << "2"; }
    void bar() { cout << "3"; }
};
int main()
{
    Due d;
    // insert code here
    d.Uno::foo();
    d.bar();
}