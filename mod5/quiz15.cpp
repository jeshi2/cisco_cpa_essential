#include <iostream>
using namespace std;
class A
{
public:
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
    A a, b(1.0);
    cout << a.get(b.set(1.5));
    return 0;
}