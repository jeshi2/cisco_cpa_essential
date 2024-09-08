#include <iostream>
using namespace std;

int *make(int v)
{
    int *p = new int;
    *p = v + 1;
    return p;
}

int *play(int &v)
{
    cout << ++v;
    return &v;
}

void remove(int *v)
{
    delete v;
}

int main()
{
    remove(play(*make(3)));
}