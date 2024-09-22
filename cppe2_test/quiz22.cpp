#include <iostream>
using namespace std;
class Zero
{
public:
    void out() { cout << 0; }
};
class One : public Zero
{
public:
    void out() { cout << 1; }
};
class Two : public Zero
{
public:
    void out() { cout << 2; }
};
int main()
{
    Zero *obj;
    One obj1;
    obj = &obj1;
    obj->out();
    Two obj2;
    obj = &obj2;
    obj->out();
    return 0;
}