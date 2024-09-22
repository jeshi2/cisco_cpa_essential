#include <iostream>
#include <exception>

using namespace std;

int main()
{
    try
    {
        if (true)
        {
            throw 2 / 4;
        }
    }
    catch (int i)
    {
        cout << i;
    }
    return 0;
}//0