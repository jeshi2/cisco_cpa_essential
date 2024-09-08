#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> t = {3, 2, 1};
    int *ptr = t.data() + 1;
    (*(ptr + 1))++;
    (*(ptr - 1))++;
    cout << t[0] << t[1] << t[2];
}