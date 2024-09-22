#include <iostream>
using namespace std;
float doit(int a, int b)
{
    return a * b;
}
float doit(float a, float b)
{
    return a + b;
}
int main()
{
    cout << doit(doit(1, 2), doit(3.f, 4.f));
    return 0;
}