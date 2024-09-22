#include <iostream>
using namespace std;

class Int
{
public:
    int v;
    Int(int a) { v = a; }
};

ostream &operator<<(ostream &cout, Int &a)
{
    return cout << a.v;
}

int main()
{
    Int i = 1;
    cout << i;
    return 0;
}//1