#include <iostream>
#include <vector>
using namespace std;
int main()
{
  vector<float> f(2);
  float *p1 = f.data(), *p2 = p1 + 1;
  cout << (p2 - p1) / sizeof(float);
}