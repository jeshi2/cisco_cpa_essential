// #include <iostream>
// using namespace std;
// int fact(int); // Function declaration
// int main()
// {
//     int n;
//     cout << "enter number to find out factorial: ";
//     cin >> n;
//     cout << fact(n);
//     return 0;
// }
// int fact(int a)
// {
//     int factorial = 1;
//     if (a == 0 || a == 1)
//     {
//         return 1;
//     }
//     for (int i = 2; i <= a; i++)
//     {
//         factorial = factorial * i;
//     }
//     return factorial;
// }

// #include <iostream>
// using namespace std;
// void fib(int a);
// int main()
// {
//     int n;
//     cout << "enter number of terms u want in fibonacci series: ";
//     cin >> n;
//     fib(n);
// }
// void fib(int a)
// {
//     int x = 0;
//     int y = 1;
//     int nexterm;
//     for (int i = 1; i <= a; i++)
//     {
//         cout << x << " ";
//         nexterm = x + y;
//         x = y;
//         y = nexterm;
//     }
//     return;
// }

#include <iostream>
using namespace std;
bool isPrime(int a)
{
    for (int i = 2; i <= (a / 2); i++)
    {
        if (a % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int a, b;
    cout << "enter a and b: ";
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        if (isPrime(i) == true)
        {
            cout << i << endl;
        }
    }
    return 0;
}