#include <iostream>
#include <string>
using namespace std;
int main()
{
    bool t[] = {false, true, false & true};
    string u[2] = {"false", "true"};
    bool *p;
    p = t + 2;
    cout << u[*p];
    return 0;
}