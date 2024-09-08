#include <iostream>
using namespace std;
float Float(float x)
{
    return 2 * x / (.5 * x);
}
void Void(int n)
{
    float v = n;
    v = Float(v);
    cout << v;
}
int main()
{
    Void(1);
}