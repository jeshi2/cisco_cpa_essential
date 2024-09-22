#include <iostream>
#include <string>
using namespace std;
int boo(int v)
{
    v++;
    return ++v;
}
int main()
{
    float x = 3;
    x = boo(x);
    cout << x;
    return 0;
}