#include <iostream>
using namespace std;
class A
{
public:
    int v;
    A(int x) : v(x + 1) {}
    int get() const { return v; }
};
int main()
{
    A a(2);
    A b(a);
    cout << a.get() << b.get();
    return 0;
}