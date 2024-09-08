#include <iostream>
using namespace std;
int fun(float a, float b)
{
return a / b;
}
int main()
{
cout << fun(fun (1., 2.), fun(2., 1.));
}