#include <iostream>
using namespace std;
int main()
{
    bool b1 = !true;
    bool b2 = !b1 && false;
    bool b3 = b2 || true;
    if(b3)
        cout << "true";
    else
        cout << "false";
}