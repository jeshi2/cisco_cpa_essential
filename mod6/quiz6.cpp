#include <iostream>
using namespace std;
class X
{
public:
    int v;
    void put(int x) { v = x; }
    int get(void) { return v; }
};
class Y : public X
{
public:
    Y() { put(0); }
    void write(int x) { put(x + 1); }
    int read(void) { return get() - 1; }
};
int main()
{
    Y *y = new Y();
    y->write(1);
    cout << y->read();
    delete y;
    return 0;
}