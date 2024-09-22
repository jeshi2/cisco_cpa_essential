#include <cstdlib>
#include <iostream>

using namespace std;

char *inc(char par1, int par2)
{
    char *c = (char *)malloc(sizeof(char));
    *c = par1 + par2;
    return c;
}

int main()
{
    int a = 'a', b = 3;
    char *f;
    f = inc(a, b);
    cout << *f;
    free(f);
    return 0;
}