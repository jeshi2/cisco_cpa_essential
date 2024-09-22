#include <iostream>
using namespace std;
int main()
{
    const char c = '!';
    const char *p;
    p = &c;
    *p = '?'; // This line will cause a compilation error
    cout << *p;
    return 0;
}