#include <iostream>
using namespace std;
int main()
{
    int a = 2, b = a >> 1;
    int c = b >> a;
    int d = 1 << c;
    int e = d << d;
    cout << e;
}