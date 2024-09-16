#include <iostream>
#include <string>
using namespace std;
// void add(int, int);
// void add(int, int, int);
// void add(int, double);
// void add(double, int);
void func(int);
void func(int &);
int main()
{
    int x = 6;
    func(x);
    // add(2, 3);
    // add(2, 3, 4);
    // add(3, 10.4);
    // add(34.5, 1);
    return 0;
}
void func(int a)
{
    cout << a;
}
void func(int &b)
{
    cout << b;
}
// void add(int a, int b)
// {
//     cout << a + b << endl;
// }
// void add(int a, int b, int c)
// {
//     cout << a + b + c << endl;
// }
void add(int a, double b)
{
    cout << a + b << endl;
}
void add(double a, int b)
{
    cout << a + b << endl;
}

// void display(int);
// void display(string);
// int main()
// {
//     display(3);
//     display("Jamila");
//     return 0;
// }
// void display(int a)
// {
//     cout<<"printing integer value: "<<a<<endl;
// }
// void display(string str)
// {
//     cout<<"printing string value: "<<str<<endl;
// }