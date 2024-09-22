#include <iostream>
using namespace std;
int doit(int x)
{
    return x << 1;
}
int main()
{
    int i;
    i = doit(1) || doit(0);
    cout << i;
    return 0;
}