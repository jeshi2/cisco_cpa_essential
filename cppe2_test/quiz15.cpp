#include <iostream>
using namespace std;
int main()
{
    enum answer
    {
        yes,
        no,
        whoknows
    };
    answer a[3];
    a[0] = no;
    a[2] = yes;
    a[1] = whoknows;
    for (int i = 0; i < 3; i++)
        cout << a[i] << " "; // Added space separation for clarity
    return 0;
}