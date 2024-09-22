#include <iostream>
using namespace std;

int sub(int x, int y)
{
    x -= y; // This line was the issue!
    return x;
}

int main()
{
    int a = 0, b = 1, c, d;
    c = sub(a, b);
    d = sub(c, b);
    cout << c << " " << d; // Added a space for clarity
    return 0;
}