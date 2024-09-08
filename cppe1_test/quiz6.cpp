#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<float *> ft = {new float[1], new float[1], new float[1]};
    for (int i = 0; i < 3; i++)
    {
        float *p = ft[i];
        *p = i;
    }
    cout << *ft[1];
    for (int i = 0; i < 3; i++)
    {
        delete[] ft[i];
    }
}