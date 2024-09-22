#include <iostream>
using namespace std;
int main()
{
    int i = 0;
    cout << i;
    {
        int i = 1;
        cout << i;
    }
    {
        int i = 2;
    }
    cout << i;
    return 0;
}