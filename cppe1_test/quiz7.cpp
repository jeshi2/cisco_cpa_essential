#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<char> text(5);
    char *chr1 = text.data() + 2, *chr2 = chr1 + 2;
    cout << chr2 - text.data();
}