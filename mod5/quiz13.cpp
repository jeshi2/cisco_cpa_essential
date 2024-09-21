#include <iostream>
using namespace std;

class A
{
public:
    A() { v = 2.5; }
    A(float v) { A::v = v + 1.0; }
    float v;
    float set(float v)
    {
        A::v += 1.0;
        return v;
    }
    float get(float v)
    {
        v += A::v;
        return v;
    }
};

int main()
{
    A a, b(1.0);
    cout << a.get(b.set(1.5));
    return 0;
}