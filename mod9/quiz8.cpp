#include <iostream>
using namespace std;
enum T
{
    A = 2,
    B = -1,
    C
};
T operator+(T t, int i)
{
    switch (t)
    {
    case A:
        return T(0);
    case B:
        return static_cast<T>(2);
    default:
        return (T)1;
    }
}
int main()
{
    T i = A + 2;
    cout << i;
    return 0;
}