#include <iostream>
using namespace std;

bool compare(bool t, bool u)
{
    return t < u;
}

int main()
{
    cout << compare(true, false);
    return 0;
}