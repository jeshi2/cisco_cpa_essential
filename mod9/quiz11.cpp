#include <iostream>
using namespace std;
class Int
{
public:
    int v;
    Int(int a) { v = a; }
    Int &operator--()
    {
        ++v;
        ++v;
        return *this;
    }
};
ostream &operator<<(ostream &o, Int &a)
{
    return o << a.v++;
}
int main()
{
    Int i = 0;
    cout << --i;
    return 0;
}