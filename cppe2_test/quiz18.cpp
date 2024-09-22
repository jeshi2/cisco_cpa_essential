#include <iostream>
#include <string>
using namespace std;
int f(int a)
{
    return a + a;
}
int main()
{
    int i = 0;
    for (int a = 0; a < 2; a++)
        i = f(i + 1);
    cout << i;
    return 0;
}