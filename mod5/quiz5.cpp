#include <iostream>
using namespace std;
class A
{
public:
    float v;
    A() { v = 1.0; }
    A(A &a)
    {
        A::v = a.v;
        cout << "1";
    }
    ~A() { cout << "0"; }
    float set(float v)
    {
        A::v = v;
        return v;
    }
    float get(float v)
    {
        return A::v;
    }
};
int main()
{
    A a, b = a;
    return 0;
}