#include <iostream>
using namespace std;
int main()
{
    short s = 1;
    int i = 2;
    float f = 4.4;
    double d = 6.6;
    cout << i / static_cast<float>(s) + int(f) / i + (long)d / s;
    return 0;
}