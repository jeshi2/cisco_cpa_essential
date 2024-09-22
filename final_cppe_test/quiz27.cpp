#include <iostream>
#include <string>
using namespace std;

struct S
{
    char *p;
};

class C
{
    S s;

public:
    C()
    {
        s.p = new char;
        *s.p = 'A';
    }
    void p() { cout << ++(*s.p); }
};

int main()
{
    C *c = new C();
    c->p(); // Output: B
    return 0;
}