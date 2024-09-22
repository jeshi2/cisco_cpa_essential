#include <iostream>
#include <string>
using namespace std;
class N
{
public:
    float x;
    N() { x = 0.0; }
    N(float a) { x = a; }
    N(N &n) { x = n.x; }
    // Comparison should return bool, not string
    bool operator==(float f) { return int(x) == int(f); }
};
int main()
{
    N a(1.1);
    // Use stream insertion operator instead of concatenating strings
    cout << boolalpha << (a == 1.9); // Comparing floats directly is often imprecise
    return 0;
}