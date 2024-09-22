#include <iostream>
using namespace std;
class N
{
public:
    float x;
    N() { x = 0.0; }
    N(float a) { x = a; }
    N(const N &n) { x = n.x; }
    N operator<<(const N &y) { return N(x * 10); }
};
int main()
{
    N a(2.0), b(4.0);
    N c = a << 1;
    cout << c.x;
    return 0;
}//2