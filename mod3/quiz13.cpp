#include <iostream>
#include <vector>
using namespace std;
int fun(int* t)
{
    t[0] += t[1];
    return t[0];
}
int main()
{
    vector<int> t = { 5,6,7 };
    cout << fun(&t[1]);
    cout << t[0];
}