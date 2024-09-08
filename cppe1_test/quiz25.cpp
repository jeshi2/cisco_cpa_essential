#include <iostream>
using namespace std;
int op(int i, int j = 1)
{
    return i * j;
}
int op(char a, char b)
{
    return b - a;
}
int op(float x, float y)
{
    return x / y;
}
int main()
{
    cout << op(2) << op('c', 'a') << op(4.f, 2.f);
}