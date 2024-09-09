#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> t = { 8, 4, 3, 2, 1};
    int i;
    for(i = t[4]; i < t[3]; i++)
        t[i-1]=-t[3];
    cout << i;
}