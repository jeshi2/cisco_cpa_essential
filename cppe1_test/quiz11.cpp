#include <iostream>
using namespace std;
float combine (float x1 = 0.0, int x2 = 1.0)
{
    return x2 + x1;
}
int main()
{
    cout << combine() + combine (1.) + combine (2., 3.);
}