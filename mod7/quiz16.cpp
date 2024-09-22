#include <iostream>
using namespace std;
class X
{
public:
    X(void)
    throw(int) { cout << 1; }
    ~X(void) throw(int) { cout << 2; }
    void exec() { throw string("0"); }
};
void exec(X x)
{
    x.exec();
}
int main(void)
{
    X x;
    try
    {
        exec(x);
    }
    catch (int &i)
    {
        cout << i;
    }
    return 0;
}