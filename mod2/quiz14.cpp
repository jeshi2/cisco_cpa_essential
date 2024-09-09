#include <iostream>
#include <vector>
using namespace std;
struct S {
  int t;
};
struct SS {
  S t;
};
int main() {
  vector<SS> t = { {1}, {2} };
  cout << t[0].t.t << t[1].t.t;
}