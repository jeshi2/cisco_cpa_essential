#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<float *> ft = {new float[3], new float[3], new float[3]};
    float *p = nullptr;
    for (int i = 0; i < 3; i++)
    {
        p = ft[i];
        *p = p[1] = *(p + 2) = 10 * i;
    }
    cout << ft[1][1];
    delete[] ft[0];
    delete[] ft[1];
    delete[] ft[2];
}