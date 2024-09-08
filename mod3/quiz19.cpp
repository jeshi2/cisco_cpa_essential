#include <iostream>
using namespace std;
float fun(float arg)
{
    return arg * arg + arg + 1;
}
int main()
{
    cout << fun(fun(1.0));
}