#include <iostream>
using namespace std;
int main()
{
  int a = 0x02, b = 001;
  int c = a ^ b;
  int d = c | a;
  int e = d & 0;
  cout << e;
}