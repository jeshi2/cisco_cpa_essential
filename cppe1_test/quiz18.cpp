#include <iostream>
using namespace std;
double eval(double x)
{
  return x / (.5 * x);
}
void use (double n)
{
  int v = 1/ n;
  v = eval(v);
  cout << v;
}
int main()
{
  use(1.f);
}