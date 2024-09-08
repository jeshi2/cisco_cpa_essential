#include <iostream>

namespace SpaceA
{
    int A;
}

namespace SpaceB
{
    int A;
}

using namespace SpaceA;
using namespace SpaceB;

int main()
{
    SpaceA::A = SpaceB::A = 1;
    std::cout << A + 1;
    return 0;
}