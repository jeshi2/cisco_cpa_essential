#include <iostream>

using namespace std;

int main(int argc, const char *argv[])
{
    float B = 32;
    {
        char B = '1';
        cout << B;
    }
    {
        int B = 2;
        cout << B;
    }
    cout << B;
    return 0;
}