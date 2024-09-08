#include <iostream>
using namespace std;
int main()
{
    int i = 2;
    float f = 4.4;
    cout << f % static_cast<float>(i);
}