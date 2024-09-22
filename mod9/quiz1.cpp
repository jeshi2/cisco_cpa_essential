#include <iostream>

using namespace std;

class N
{
public:
    float x;
    N() { x = 0.0; }
    N(float a) { x = a; }
    N(const N &n) { x = n.x; } // Pass by reference for copy constructor
};

// Corrected assignment operator to take a const reference and return a reference
N &operator=(N &y, float f)
{
    y.x = f; // Modify the existing object instead of creating a new one
    return y;
}

int main()
{
    N a;
    a = 2.0;
    cout << a.x;
    return 0;
}