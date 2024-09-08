#include <iostream>
using namespace std;
int main()
{
    int i = 1, k = i << 1;
    switch (k)
    {
    case 1:
        i += 1;
        break;
    case 2:
        i += 2;
        break;
    default:
        i += 3;
    }
    cout << i;
}