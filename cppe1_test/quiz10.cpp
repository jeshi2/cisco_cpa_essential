#include <iostream>
using namespace std;
int main()
{
    int k = 3;
    if(k > 0) {
        if(k != 3)
            k--;
        if(k == 3)
            k++;
    }
    if(k < 0) {
        k = 5;
    }
    cout << k;
}