#include <iostream>
using namespace std;
class A
{
public:
    int data[3];

private:
    int cnt;

public:
    void put(int v) { data[cnt++] = v; }
    int take()
    {
        int c = cnt;
        cnt = 0;
        return c;
    }
};
int main()
{
    A a;
    a.take();
    a.put(a.take());
    a.put(1);
    cout << a.data[0];
    return 0;
}