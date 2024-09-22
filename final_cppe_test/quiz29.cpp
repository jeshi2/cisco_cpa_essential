#include <iostream>
using namespace std;

int X = 5;

int main()
{
    cout << "HI!";
    if (X-- > 0)
    {
        main();
    }
    return 0;
}
