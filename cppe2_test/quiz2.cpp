#include <iostream>

void fun(int *i)
{
    *i = *i >> *i - 1;
}

using namespace std;

int main()
{
    int i = 2;
    fun(&i);
    cout << i;
    return 0;
}