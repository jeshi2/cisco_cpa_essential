#include <iostream>
using namespace std;

class A
{
public:
    int cnt;
    void put(int v) { cout << cnt++; }
};

int main()
{
    A a;
    a.cnt = 0;
    a.put(1);
    a.put(1);
    return 0;
}