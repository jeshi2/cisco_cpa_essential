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
    A a(0.), b = a;
    cout << a.get(b.set(1.5));
    return 0;
}