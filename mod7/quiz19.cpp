#include <iostream>
#include <exception>

using namespace std;

int main()
{
    try
    {
        throw 2. / 4;
    }
    catch (double i)
    { // The thrown value is a double, not an int
        cout << i;
    }
    return 0;
}//0.5