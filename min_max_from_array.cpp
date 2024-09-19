// #include <iostream>
// using namespace std;
// int min_element(int[], int);
// int max_element(int[], int);
// int main()
// {
//     int arr[] = {34, -78, 0, 1, 56};
//     int smallest_element;
//     int size = sizeof(arr) / sizeof(int);
//     smallest_element = min_element(arr, size);
//     cout << smallest_element << endl;
//     cout << max_element(arr, size);
//     return 0;
// }
// int min_element(int a[], int size)
// {
//     int smallest = a[0];
//     for (int i = 0; i < size; i++)
//     {
//         if (a[i] < smallest)
//         {
//             smallest = a[i];
//         }
//     }
//     return smallest;
// }
// int max_element(int a[], int size)
// {
//     int maximum = a[0];
//     for (int i = 0; i < size; i++)
//     {
//         if (a[i] > maximum)
//         {
//             maximum = a[i];
//         }
//     }
//     return maximum;
// }

#include <iostream>
using namespace std;
void print_list(const string[], int);
void clear_list(string[], int);
int main()
{
    string speakers_list[] = {"Jenny", "SRK", "Modi"};
    int speaker_list_size = 3;
    print_list(speakers_list, speaker_list_size);
    clear_list(speakers_list, speaker_list_size);
    print_list(speakers_list, speaker_list_size);
}
void print_list(const string s_list[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << s_list[i] << " ";
    }
    // s_list[2]="Rahul";
    cout << endl;
}
void clear_list(string s_list[], int size)
{
    for (int i = 0; i < size; i++)
    {
        s_list[i] = "";
    }
    cout << "list cleared";
}