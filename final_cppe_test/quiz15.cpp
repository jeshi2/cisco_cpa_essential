#include <iostream>
using namespace std;
char max(char x, char y)
{
    if (x > y)
        return y;
    else
        return x;
}
int main()
{
    char chr = max('a', 'z');
    cout << chr;
    return 0;
}