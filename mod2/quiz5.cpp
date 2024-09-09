#include<iostream>
#include<vector>

using namespace std;
struct Stru
{
    int i1, i2;
    char c1, c2;
};

int main()
{
    Stru a = {1,2,'a','b'};
    Stru b = {5,6,'x','y'};

    cout<<static_cast<char>(b.c1 + a.i1);
    cout<<static_cast<int>(a.c2 - a.c1);
    cout<<static_cast<int>(b.c2 - b.c1);
}
