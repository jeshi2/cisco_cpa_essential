#include <iostream>
using namespace std;
char do1(char *x)
{
    return *x;
}
char *do2(char *y)
{
    return y;
}
char *do3(char &z)
{
    return &z;
}
int main()
{
    char sign = '1';
    cout << do1(do2(do3(sign)));
}