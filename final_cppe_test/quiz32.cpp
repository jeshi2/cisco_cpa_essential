#include <iostream>
using namespace std;
namespace OuterSpace
{
    int x = 1;
    int y = 2;
}
namespace InnerSpace
{
    float x = 3.0;
    float y = 4.0;
}
int main()
{
    {
        using namespace InnerSpace;
        cout << x << " ";
    }
    {
        using namespace OuterSpace;
        using InnerSpace::y;
        cout << y;
    }
    return 0;
}