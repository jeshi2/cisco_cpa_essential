#include <iostream>
using namespace std;
struct S
{
    float *f;
};
void make(S *p, float x = 10)
{
    float *f = new float;
    *f = sizeof(*f) / sizeof(float) * 10;
    p->f = f;
}
int main()
{
    S *ss = new S;
    make(ss);
    cout << *(*ss).f;
    delete ss->f;
    delete ss;
}