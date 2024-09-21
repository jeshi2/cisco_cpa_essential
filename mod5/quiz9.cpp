#include <iostream>
using namespace std;
class A
{
public:
    float v;
    float set(float v)
    {
        A::v += 1.0;
        A::v = v + 1.0;
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
    cout << a.get(a.set(a.set(0.5)));
    return 0;
}