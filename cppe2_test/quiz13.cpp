#include <iostream>
#include <string>
using namespace std;
class Alpha
{
    int p;

protected:
    int q;

public:
    int r;
    Alpha() : p(2), q(3), r(4) {}
};
class Beta : public Alpha
{
    string s;

public:
    int y;
    void assign()
    {
        y = 4;
        s = "f";
    }
    void out()
    {
        // insert code here
        cout << " y = " << y << ", ";
        cout << "s = " << s << ", ";
        cout << "p = " << p << ", ";
        cout << "q = " << q << ", ";
        cout << "r = " << r << endl;
    }
};
int main()
{
    Beta b;
    b.assign();
    b.out();
    return 0;
}