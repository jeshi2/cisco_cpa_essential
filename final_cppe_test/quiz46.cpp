#include <iostream>
#include <string>
using namespace std;
class cmplx
{
    double re, im;

public:
    cmplx() : re(1), im(1) {}
    cmplx(double r, double i) : re(r), im(i) {}
    cmplx operator+(cmplx &);
    void out() { cout << "(" << re << "," << im << ")"; }
};
cmplx cmplx::operator+(cmplx &a)
{
    cmplx c(this->re + a.re, this->im + a.im);
    return c;
}
int main()
{
    cmplx x(1, 2), y, z;
    z = x + y;
    z.out();
    return 0;
}