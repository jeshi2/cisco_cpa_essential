#include <iostream>
using namespace std;
class A
{
public:
    int cnt;
    void put(int v);
};
void A::put(int v) { cout << ++cnt; }
int main()
{
    A a[2];
    a[0].cnt = 0;
    a[1].cnt = 1;
    a[a[0].cnt].put(a[1].cnt);
    return 0;
}