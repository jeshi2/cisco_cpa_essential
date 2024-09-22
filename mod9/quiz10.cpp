#include <iostream>
using namespace std;
class N
{
public:
    float x;
    N() { x = 0.0; }
    N(float a) { x = a; }
    N(N &n) { x = n.x; }
    N &operator%(N &y) { return *new N((int)x % (int)y.x); }
};
int main()
{
    N a(2.0), b(4.0);
    N c = a % b;
    cout << c.x;
    return 0;
}