#include <iostream>
using namespace std;
class Int
{
public:
    int v;
    Int(int a) { v = a; }
};
int main()
{
    Int i = 1;
    cout << i;
    return 0;
}