#include <iostream>
using namespace std;
int main()
{
    int cnt = 10;
    do
    {
        cnt--;
        if (cnt % 3 == 2)
            break;
        cout << cnt << " ";
    } while (cnt);
    return 0;
}