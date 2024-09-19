#include <iostream>
using namespace std;
// int SIZE=5;
void print_array(const int[], int);
void set_array(int[], int);
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(int);
    print_array(arr, size);
    set_array(arr, size);
    print_array(arr, size);
}
void print_array(const int a[], int size)
{
    // cout<<sizeof(a)<<endl;
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    // a[1]=56;
}
void set_array(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        a[i] = a[i] + 5;
    }
}