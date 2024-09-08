#include <iostream>
using namespace std;
int main()
{
    short s = 1;
    int i = 2;
    float f = 4.;
    cout << i / static_cast<float>(s) + i / 2 + i / f;
    return 0;
}