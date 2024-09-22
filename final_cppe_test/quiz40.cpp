#include <iostream>
#include <exception>
using namespace std;
int main()
{
    long i = 2000000000;
    try
    {
        char *text = new char[i];
    }
    catch (bad_alloc &e)
    {
        cout << "1";
    }
    catch (exception &e)
    {
        cout << "2";
    }
    catch (...)
    {
        cout << "3";
    }
    return 0;
}