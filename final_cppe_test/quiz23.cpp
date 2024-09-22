#include <iostream>
#include <string>
using namespace std;
class Uno
{
public:
    int Int;
};
class Due : public Uno
{
public:
    Due() { Int = 2; }
    Due(int x) { Int = x == 0 ? 2 : x - 2; }
};
int main()
{
    Due d, d2(0);
    cout << d.Int - d2.Int;
    return 0;
}