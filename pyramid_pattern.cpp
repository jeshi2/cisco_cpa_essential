#include<iostream>
#include<string>
using namespace std;
int main()
{
    string letters;
    cout<<"Enter the string to create pyramid: ";
    getline(cin,letters);
    int len=letters.length();
    int position=0;

    for(char c:letters) // ABC
    {
        int spaces=len-(position+1);
        while (spaces>0)
        {
            cout<<" ";
            --spaces;
        }
        for(int i=0;i<position;i++)
        {
            cout<<letters.at(i);
        }
        cout<<c;

        for(int i=position-1;i>=0;i--)
        {
            cout<<letters.at(i);
        }
        cout<<endl;
        position++;
        
    }
    return 0;
}