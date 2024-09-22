#include <iostream>
using namespace std;

int k = -1; // Potential issue: negative size for char array

class Class
{
public:
    char *adr;
    Class() { adr = new char[k]; } // Potential issue: using k before initialization in the constructor
    ~Class() { delete[] adr; }     // Corrected: Use delete[] for array allocated with new[]
};

int fun(void)
{
    Class object;
    return 0.5f; // Warning: Returning a float from a function declared to return int
}

int main()
{
    fun();
    return 0;
}