#include <iostream>
using namespace std;

enum T
{
    A = 2,
    B = -1,
    C
};

class Int
{
public:
    T v;
    Int(T a) { v = a; }
    Int &operator++()
    {
        v = static_cast<T>(v + 2);
        return *this;
    }
};
ostream &operator<<(ostream &o, Int &a)
{
    ++a;
    return o << a.v;
}

int main()
{
    Int i = B;
    cout << i;
    return 0;
}//1