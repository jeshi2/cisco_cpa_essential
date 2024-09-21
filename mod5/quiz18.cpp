#include <iostream>
using namespace std;
class A
{
public:
    A(A &a) { v = a.get(0.0); }
    A(float v) { A::v = v; }
    float v;
    float set(float v)
    {
        A::v += v;
        return v;
    }
    float get(float v)
    {
        return A::v + v;
    }
};
int main()
{
    A *a = new A(1.0), *b = new A(*a);
    cout << a->get(b->set(a->v));
    return 0;
}