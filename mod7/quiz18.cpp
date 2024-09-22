#include <iostream>
#include <exception>

using namespace std;

int main()
{
    try
    {
        throw exception();
    }
    catch (exception &x)
    {
        cout << x.what();
    }
    return 0;
}