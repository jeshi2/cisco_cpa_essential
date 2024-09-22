#include <iostream>
using namespace std;

char fun(char *p)
{
    char c = *p;
    (*p)++;
    return c;
}

int main()
{
    char array[3] = {'a', 'b', 'c'};
    fun(array + 1);
    cout << fun(array + 1);
    return 0;
}