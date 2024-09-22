#include <iostream>
using namespace std;

int doit(int a, float b)
{
    return a / b;
}

int main()
{
    float x = doit(1.5f, 21);
    cout << x << ":" << doit(1, 1.f);
    return 0;
}