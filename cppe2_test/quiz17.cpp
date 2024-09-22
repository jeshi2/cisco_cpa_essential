#include <iostream>
using namespace std;

int var = -1;

int Static(int i)
{
    static int y = 0;
    y += ++i;
    return y;
}

int main()
{
    var++;                      // var becomes 0
    Static(var++);              // var becomes 1, Static(0) returns 1
    cout << var << Static(var); // prints "13" (var is 1, Static(1) returns 3)
    return 0;
}