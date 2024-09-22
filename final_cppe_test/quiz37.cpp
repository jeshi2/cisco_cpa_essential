#include <iostream>
using namespace std;
#define CALL(param)          \
    {                        \
        if (param)           \
            cout << param++; \
    }
int main()
{
    int i = 1;
    CALL(i);
    cout << i;
    return 0;
}