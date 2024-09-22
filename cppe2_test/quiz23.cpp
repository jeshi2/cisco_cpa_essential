#include <iostream>
#include <string>
#include <exception>

using namespace std;

class a
{
public:
    virtual string whose()
    {
        return "mine";
    }
};

class b : public a
{
public:
    virtual string whose()
    {
        return "yours";
    }
};

int main()
{
    a b;
    try
    {
        throw b;
    }
    catch (a &e)
    {
        cout << e.whose() << endl;
    }
    return 0;
}