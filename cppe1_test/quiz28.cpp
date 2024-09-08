#include <iostream>
#include <string>
using namespace std;
string replicate (string s = "x", int r = 1)
{
  string t;
  while(r--)
    t += s;
  return t;
}
int main()
{
  string pattern = "a";
  cout << replicate (pattern);
}