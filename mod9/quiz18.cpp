#include <iostream>
using namespace std;
class Int
{
public:
    int v;
    Int(int a) { v = a; }
    Int &operator--()
    { // prefix decrement should return by reference
        ++v;
        return *this;
    }
    Int &operator--(int v)
    { // postfix decrement should return by value
       
        v += 2;
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
    cout << --i << " " << i--;
    return 0;
}//12