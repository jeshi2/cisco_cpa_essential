#include <iostream>
using namespace std;

class A
{
public:
    const int v;
    A(int x) : v(x + 1) {}
    int get() { return ++v; }
};

int main()
{
    A a(2);
    cout << a.get();
    return 0;
}