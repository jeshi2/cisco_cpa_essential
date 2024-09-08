#include <iostream>
using namespace std;
int main()
{
  int i= 2, j= i++, k= i++;
  cin >> i;
  cout << k-i << j-i;
}