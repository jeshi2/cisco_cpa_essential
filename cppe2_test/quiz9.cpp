#include <iostream>
using namespace std;

int main()
{
    int *Int = new int;
    *Int = 1 / 2 * 2 / 1. * 2. / 4 * 4;
    cout << *Int;
    return 0;
}