#include <iostream>
using namespace std;
void modifyNum(int*);
int main()
{
    int a = 5;
    cout << "Before calling function value of a is: " << a << endl;
    modifyNum(&a);
    cout << "After calling function value of a is: " << a << endl;
}

void modifyNum(int* n)
{
    *n = 50;
    cout << "within modifyNum values of a is: " << *n << endl;
}