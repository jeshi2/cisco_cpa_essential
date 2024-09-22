#include <iostream>
#include <exception>

using namespace std;

int main()
{
    try
    {
        throw 2 / 4;
    }
    catch (int i)
    {
        cout << i;
    }
    return 0;
}