#include <iostream>
using namespace std;

int doit(int i, int j = 0)
{
    return (i * j);
}

int main()
{
    cout << doit(doit(1, 2));
    return 0;
}