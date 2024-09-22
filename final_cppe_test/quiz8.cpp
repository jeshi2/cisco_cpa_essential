#include <iostream>
using namespace std;

class Uno
{
public:
    char Char;
};

int main()
{
    int swtch;
    Uno u;
    u.Char = '5';
    cin >> swtch;

    try
    {
        switch (swtch)
        {
        case 3:
            throw 1;
        case 2:
            throw 3.f;
        case 1:
            throw u;
        }
    }
    catch (int e)
    {
        cout << e;
    }
    catch (Uno e)
    {
        cout << e.Char;
    }
    catch (...)
    {
        cout << "?";
    }

    return 0;
}