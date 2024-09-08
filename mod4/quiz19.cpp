#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    vector<string> t = {"alpha", "beta", "gamma"};
    int *cnt = new int[3], *p = &cnt[0];
    for (int i = 0; i < t.size(); i++)
        *p++ = t[i].length();
    cout << cnt[0] << cnt[1] << cnt[2];
    delete[] cnt;
}