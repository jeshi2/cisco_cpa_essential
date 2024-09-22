#include <iostream>
using namespace std;

class one
{
public:
    void foo() { cout << 1; }
};

class two
{
public:
    void foo() { cout << 2; }
};

int main()
{
    two objects[2];
    two *object = objects;
    for (int i = 0; i < 2; i++)
    {
        (object++)->foo();
    }
    return 0;
}