#include <iostream>
#include <string>
using namespace std;
class N
{
public:
    float x;
    N() { x = 0.0; }
    N(float a) { x = a; }
    N(N &n) { x = n.x; }
    string operator==(N &n)
    {
        if (this != &n)
            return "true";
        else
            return "false";
    }
};
int main()
{
    Na(1.1), *b = &a;
    cout << (a == *b);
    return 0;
}//compilation fails