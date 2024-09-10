#include <iostream>
#include <string>
using namespace std;
int main()
{
    string alphabets{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ "};
    string key{"ZYXWVUTSRQPONMLKJIHGFEDCBAzyxwvutsrqponmlkjihgfedcba@"};

    string msg{};
    string encrypted_msg;
    string decrypted_msg;
    cout << "Enter your message: ";
    getline(cin, msg);

    cout << "\nEncrypting message..." << endl;

    for (char c : msg)
    {
        size_t position = alphabets.find(c);
        if (position != string::npos)
        {
            char new_c = key.at(position);
            encrypted_msg += new_c;
        }
        else
        {
            encrypted_msg += c;
        }
    }
    cout << "\nEncrypted message is: " << encrypted_msg << endl;
    cout << "Decrypting message..." << endl;

    for (char c : encrypted_msg)
    {
        size_t position = key.find(c);
        if (position != string::npos)
        {
            char new_c = alphabets.at(position);
            decrypted_msg += new_c;
        }
        else
        {
            decrypted_msg += c;
        }
    }
    cout << "\nDecrypted message is: " << decrypted_msg << endl;
    return 0;
}