#include <iostream>
using namespace std;
class X
{
protected:
    int v;
};
class Y : protected X
{
    Y() : v(0) {}
} int main()
{
    Y *y = new Y();
    cout << y->v;
    delete y;
    return 0;
}