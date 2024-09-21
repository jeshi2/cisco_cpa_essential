#include <iostream>
using namespace std;
class A
{
public:
    A() { v = 2.5; }
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
    A a;
    cout << a.get(a.set(1.5));
    return 0;
}