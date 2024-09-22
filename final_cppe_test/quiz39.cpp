#include <iostream>
#include <cstdarg>

using namespace std;

int calculate(int &val, int arg)
{
    val *= arg;
    return arg;
}

int main()
{
    int i = 1;
    int j = calculate(i, 2);
    cout << i << j;
    return 0;
}
