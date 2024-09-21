#include <iostream>
using namespace std;
class A
{
    int data[3];

public:
    int cnt;
    void put(int v) { data[cnt++] = v; }
};
int main()
{
    A a;
    a.cnt = 0;
    a.put(1);
    a.put(1);
    cout << a.cnt;
    return 0;
}