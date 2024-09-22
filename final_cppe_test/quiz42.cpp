#include <iostream>
using namespace std;
int main()
{
    char *abc;
    abc = new char[26];
    for (int i = 0; i < 26; i++)
        abc[i] = 'a' + i;
    cout << *(abc + 2);
    return 0;
}