#include <iostream>
using namespace std;
int main()
{
    int i = 2;
    float f = 5.8;
    f = static_cast<int>(f);
    i = static_cast<float>(i);
    cout << f / i;
}