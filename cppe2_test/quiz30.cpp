#include <iostream>

using namespace std;

int main()
{
    int i = 2;
    if (i-- == 1)
        cout << i;
    else
        cout << i + 1;
    return 0;
}