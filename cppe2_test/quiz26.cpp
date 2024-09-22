#include <iostream>

using namespace std;

int main()
{
    int a = -1, *p = &a;
    cout << ((p == NULL) ? 1.1 : 2.2);
    return 0;
}