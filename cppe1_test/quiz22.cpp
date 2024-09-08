#include <iostream>
using namespace std;
int main()
{
    int i = 0, k = i;
    while (i == 0)
    {
        if (k > 1)
            i = k;
        ++k;
    }
    cout << k;
}