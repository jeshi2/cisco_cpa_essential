#include <iostream>
using namespace std;
class A
{
public:
    float v;
    float set(float v)
    {
        v += 1.0;
        this->v = v;
        return v;
    }
    float get(float d)
    {
        v += 1.0;
        return v;
    }
};
int main()
{
    A a;
    cout << a.get(a.set(a.set(0.5)));
    return 0;
}