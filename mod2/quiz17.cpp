#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> a = {2, 0, 1};
    vector<int> b = {1, 2, 3};
    for(int i = 0; i < 3; i++)
        b[a[i]] = b[2 - i];
    cout << b[0] << b[2];
}