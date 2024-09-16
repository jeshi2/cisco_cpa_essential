#include <iostream>
#include <string>
using namespace std;
int sum(int, int, int = 0);
int main()
{
    cout << sum(1, 2, 3) << endl;
    cout << sum(1, 5) << endl;
    cout << sum(3, 4) << endl;
}
int sum(int x, int y, int z)
{
    return x + y + z;
}

// void greet(string name, string prefix="Mr.",string suffix=" ");
// int main()
// {
//     greet("Rahul","Mr.","Roy");
//     greet("Binord");
//     greet("Shriti","Ms.","Kumari");
//     return 0;
// }
// void greet(string name, string prefix, string suffix)
// {
//     cout<<"Hi "<<prefix + " " + name +" "+suffix<<endl;
// }