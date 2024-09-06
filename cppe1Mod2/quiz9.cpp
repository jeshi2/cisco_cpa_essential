#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<bool> t(2);
    for(int i = 0; i < 2; i++)
        t[1 - i] = !(i % 2);
    cout << t[0] && t[1];
    return 0;
}