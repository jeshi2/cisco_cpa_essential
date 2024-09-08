#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> tab = {1, 2, 4};
    int *p1 = &tab[0], *p2 = p1 + 2;
    tab[1] = p2[-1] + *p1;
    cout << tab[1];
}