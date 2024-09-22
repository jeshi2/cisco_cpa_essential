#include <iostream>
#include <string>

using namespace std;

class One
{
    char value;

public:
    One()
    {
        value = 'A';
    }
    One(char v) : value(v) {}

    void set(char c)
    {
        this->value = c;
    }
    void set()
    {
        this->value = 'd';
    }
    char get()
    {
        return value;
    }
};

int main()
{
    One o1, *o2;
    o2 = new One('b');
    One *p;
    p = &o1;
    p->set();
    p = o2;
    p->set('c');
    cout << o2->get() - o1.get(); 
    return 0;
}