#include <iostream>
using namespace std;
enum T
{
    A,
    B,
    C
};
class Int
{
public:
    T v; // Make 'v' accessible
    Int(T a) { v = a; }
};
ostream &operator<<(ostream &o, Int &a)
{
    return o << a.v;
}
int main()
{
    Int i = B;
    cout << i;
    return 0;
}