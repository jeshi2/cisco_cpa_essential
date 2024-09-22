#include <iostream>
#include <string>
using namespace std;

const int size = 3;

class Uno
{
public:
    int n;

    Uno()
    {
        n = 1;
    }

    Uno(int v)
    {
        n = v;
    }
};

class Due : public Uno
{
public:
    int *arr;

    Due() : Uno()
    {
        arr = new int[n];
    }

    Due(int a) : Uno(a)
    {
        arr = new int[n];
    }

    ~Due()
    {
        delete[] arr;
    }
};

int main()
{
    Due d(2);
    Due e;
    cout << d.n + e.n;
    return 0;
}